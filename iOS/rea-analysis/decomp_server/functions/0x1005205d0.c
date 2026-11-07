// rea decompile_all
// name: FUN_1005205d0
// address: 0x1005205d0
// body: available
// range: 0x1005205d0-0x100520943 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00010052085c) */
/* WARNING: Removing unreachable block (ram,0x00010052084c) */

void FUN_1005205d0(long *param_1,long param_2)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined8 local_e0 [6];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined1 local_98;
  undefined7 uStack_97;
  undefined8 *local_90;
  long lStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 *local_60;
  long lStack_58;
  
  puVar3 = (undefined8 *)0x7b;
  FUN_1005363c8();
  if (unaff_x21 == 0) {
    lVar5 = param_1[0xb] + -1;
    if (SBORROW8(param_1[0xb],1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1005208f0);
      (*pcVar2)();
    }
    param_1[0xb] = lVar5;
    if (lVar5 < 0) {
      FUN_1004f98e4();
      _swift_allocError(&DAT_1009d03a0,puVar3,0,0);
      uVar4 = 0x13;
LAB_100520820:
      puVar3[1] = uVar4;
      *puVar3 = 0;
      _swift_willThrow();
    }
    else {
      FUN_10053320c();
      if (((ulong)puVar3 & 1) == 0) {
        do {
          FUN_100535660();
          lVar5 = param_1[2];
          lVar6 = *param_1;
          if (lVar6 == 0) {
            if (lVar5 == 0) goto LAB_1005207f8;
          }
          else if (lVar5 == param_1[1] - lVar6) {
LAB_1005207f8:
            FUN_1004f98e4();
            _swift_allocError(&DAT_1009d03a0,puVar3,0,0);
            uVar4 = 0xd;
            goto LAB_100520820;
          }
          if ((*(char *)(lVar6 + lVar5) != '\"') || (FUN_100535e6c(), param_2 == 0)) {
            FUN_1004f98e4();
            _swift_allocError(&DAT_1009d03a0,puVar3,0,0);
            uVar4 = 5;
            goto LAB_100520820;
          }
          FUN_1005363c8(0x3a);
          local_b0 = 0;
          uStack_a8 = 0;
          local_a0 = 0x3000000000000000;
          local_98 = 0xff;
          lStack_88 = -0x4000000000000000;
          local_90 = (undefined8 *)0x0;
          FUN_100523898(param_1);
          uStack_68 = CONCAT71(uStack_97,local_98);
          uStack_78 = uStack_a8;
          local_80 = local_b0;
          uStack_70 = local_a0;
          lStack_58 = lStack_88;
          local_60 = local_90;
          FUN_10051fe18(&local_80,local_e0);
          uVar4 = *unaff_x20;
          _swift_isUniquelyReferenced_nonNull_native(uVar4);
          local_e0[0] = *unaff_x20;
          FUN_100521354(&local_80,puVar3,param_2,uVar4);
          _swift_bridgeObjectRelease(param_2);
          *unaff_x20 = local_e0[0];
          FUN_100535660();
          lVar6 = lStack_88;
          puVar3 = local_90;
          lVar5 = param_1[2];
          lVar7 = *param_1;
          if (lVar7 == 0) {
            if (lVar5 != 0) goto LAB_100520680;
          }
          else if (lVar5 != param_1[1] - lVar7) {
LAB_100520680:
            if (*(char *)(lVar7 + lVar5) == '}') {
              lVar1 = 0;
              if (lVar7 != 0) {
                lVar1 = param_1[1] - lVar7;
              }
              if ((lVar5 < 0) || (lVar1 <= lVar5)) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x1005208f4);
                (*pcVar2)();
              }
              param_1[2] = lVar5 + 1;
              lVar5 = param_1[0xb] + 1;
              if (SCARRY8(param_1[0xb],1)) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x1005208f8);
                (*pcVar2)();
              }
              param_1[0xb] = lVar5;
              if (lVar5 <= param_1[4]) {
                FUN_10051ff3c(local_b0,uStack_a8,local_a0,local_98);
                FUN_100006cdc(puVar3,lVar6);
                return;
              }
              __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                        ("Fatal error",0xb,2,0xd000000000000039,0x80000001008bc700,
                         "SwiftProtobuf/JSONScanner.swift",0x1f,2,0x1ab,0);
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x100520944);
              (*pcVar2)();
            }
          }
          FUN_1005363c8(0x2c);
          param_2 = lStack_88;
          puVar3 = local_90;
          FUN_10051ff3c(local_b0,uStack_a8,local_a0,local_98);
          FUN_100006cdc();
        } while( true );
      }
    }
  }
  return;
}

