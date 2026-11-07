// rea decompile_all
// name: FUN_100528cb8
// address: 0x100528cb8
// body: available
// range: 0x100528cb8-0x1005293ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001005292a0) */
/* WARNING: Removing unreachable block (ram,0x000100529270) */
/* WARNING: Removing unreachable block (ram,0x0001005291d4) */
/* WARNING: Removing unreachable block (ram,0x000100529210) */
/* WARNING: Removing unreachable block (ram,0x000100529298) */

void FUN_100528cb8(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  long *unaff_x20;
  long unaff_x21;
  long lVar15;
  code *pcVar16;
  undefined8 auStack_100 [2];
  long alStack_f0 [3];
  undefined8 *local_d8;
  undefined8 *local_d0;
  long local_c8;
  long local_c0;
  undefined8 local_b8;
  long local_b0;
  long local_a8;
  undefined8 local_a0;
  undefined8 *local_98;
  long local_90;
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  undefined8 *local_68;
  
  local_90 = *(long *)(param_3 + -8);
  lVar11 = (long)alStack_f0 - (*(long *)(local_90 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  local_c0 = lVar11;
  local_b8 = param_1;
  local_a0 = param_5;
  __sSqMa(0,param_3);
  local_78 = *(long *)(lVar3 + -8);
  uVar10 = *(long *)(local_78 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_c8 = lVar11 - uVar10;
  local_a8 = local_c8 - uVar10;
  lVar11 = local_a8 - uVar10;
  local_88 = *(long *)(param_4 + 8);
  puVar4 = (undefined8 *)0x0;
  local_80 = lVar11;
  local_70 = lVar3;
  _swift_getAssociatedTypeWitness
            (0,local_88,param_2,0x100900ffc,&TargetProtocolRequirement_10090100c);
  lVar15 = puVar4[-1];
  uVar10 = *(long *)(lVar15 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_b0 = lVar11 - uVar10;
  lVar11 = local_b0 - uVar10;
  puVar5 = (undefined8 *)0x0;
  puVar7 = puVar4;
  __sSqMa();
  lVar3 = puVar5[-1];
  uVar10 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_98 = (undefined8 *)(lVar11 - uVar10);
  puVar12 = (undefined8 *)((long)local_98 - uVar10);
  local_68 = puVar12;
  FUN_100535660();
  lVar13 = unaff_x20[2];
  lVar14 = *unaff_x20;
  if (lVar14 == 0) {
    if (lVar13 == 0) goto LAB_100528e60;
  }
  else if (lVar13 == unaff_x20[1] - lVar14) goto LAB_100528e60;
  if (*(char *)(lVar14 + lVar13) == 'n') {
    uVar10 = 0;
    FUN_100004bb4(&DAT_100aaa100,&DAT_1008386b0);
    puVar7 = (undefined8 *)&DAT_100aa8b50;
    _swift_initStaticObject();
    FUN_100536178();
    if ((uVar10 & 1) != 0) {
      return;
    }
  }
LAB_100528e60:
  puVar6 = (undefined8 *)0x7b;
  FUN_1005363c8();
  if (unaff_x21 == 0) {
    lVar13 = unaff_x20[0xb] + -1;
    if (SBORROW8(unaff_x20[0xb],1)) {
                    /* WARNING: Does not return */
      pcVar16 = (code *)SoftwareBreakpoint(1,0x100529350);
      (*pcVar16)();
    }
    unaff_x20[0xb] = lVar13;
    if (lVar13 < 0) {
      FUN_1004f98e4();
      _swift_allocError(&DAT_1009d03a0,puVar6,0,0);
      uVar9 = 0x13;
LAB_100529200:
      puVar6[1] = uVar9;
      *puVar6 = 0;
      _swift_willThrow();
    }
    else {
      FUN_10053320c();
      if (((ulong)puVar6 & 1) == 0) {
        FUN_1005336f8();
        alStack_f0[1] = param_2;
        alStack_f0[2] = lVar3;
        local_d8 = puVar4;
        local_d0 = puVar5;
        do {
          if ((puVar6 == (undefined8 *)0x22) && (puVar7 == (undefined8 *)0xe100000000000000)) {
            _swift_bridgeObjectRelease(0xe100000000000000);
          }
          else {
            __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      ();
            _swift_bridgeObjectRelease();
            if (((ulong)puVar6 & 1) == 0) {
              FUN_1004f98e4();
              _swift_allocError(&DAT_1009d03a0,puVar7,0,0);
              uVar9 = 0xb;
              puVar6 = puVar7;
              goto LAB_100529200;
            }
          }
          puVar6 = local_68;
          *(undefined1 *)(unaff_x20 + 0xf) = 1;
          (**(code **)(lVar15 + 0x38))(local_68,1,1,puVar4);
          (**(code **)(local_88 + 0x20))(puVar6);
          puVar5 = local_98;
          puVar7 = local_d0;
          (**(code **)(lVar3 + 0x10))(local_98,puVar6,local_d0);
          puVar6 = puVar5;
          (**(code **)(lVar15 + 0x30))(puVar5,1,puVar4);
          if ((int)puVar6 == 1) {
            pcVar16 = *(code **)(lVar3 + 8);
            (*pcVar16)(puVar5,puVar7);
            FUN_1004f98e4();
            _swift_allocError(&DAT_1009d03a0,puVar5,0,0);
            puVar5[1] = 3;
            *puVar5 = 0;
            _swift_willThrow();
            (*pcVar16)(local_68,puVar7);
            return;
          }
          (**(code **)(lVar15 + 0x20))(lVar11,puVar5,puVar4);
          *(undefined1 *)(unaff_x20 + 0xf) = 0;
          FUN_1005363c8(0x3a);
          lVar3 = local_80;
          lVar14 = local_90;
          pcVar16 = *(code **)(local_90 + 0x38);
          (*pcVar16)(local_80,1,1,param_3);
          FUN_100527088(lVar3,param_3,local_a0);
          lVar2 = local_70;
          lVar1 = local_78;
          lVar13 = local_a8;
          (**(code **)(local_78 + 0x10))(local_a8,lVar3,local_70);
          lVar8 = lVar13;
          (**(code **)(lVar14 + 0x30))(lVar13,1,param_3);
          lVar3 = local_c0;
          if ((int)lVar8 == 1) {
            (**(code **)(lVar1 + 8))(lVar13,lVar2);
          }
          else {
            (**(code **)(lVar14 + 0x20))(local_c0,lVar13,param_3);
            puVar7 = local_d8;
            (**(code **)(lVar15 + 0x10))(local_b0,lVar11,local_d8);
            lVar13 = local_c8;
            (**(code **)(lVar14 + 0x10))(local_c8,lVar3,param_3);
            (*pcVar16)(lVar13,0,1,param_3);
            lVar14 = local_88;
            _swift_getAssociatedConformanceWitness
                      (local_88,alStack_f0[1],puVar7,0x100900ffc,
                       &TargetProtocolRequirement_100901004);
            uVar9 = 0;
            __sSDMa(0,puVar7,param_3,lVar14);
            __sSDyq_Sgxcis(lVar13,local_b0,uVar9);
            (**(code **)(local_90 + 8))(lVar3,param_3);
          }
          FUN_100535660();
          puVar7 = local_d0;
          puVar4 = local_d8;
          lVar3 = alStack_f0[2];
          lVar13 = unaff_x20[2];
          lVar14 = *unaff_x20;
          if (lVar14 == 0) {
            if (lVar13 != 0) {
LAB_10052916c:
              if (*(char *)(lVar14 + lVar13) == '}') {
                lVar1 = 0;
                if (lVar14 != 0) {
                  lVar1 = unaff_x20[1] - lVar14;
                }
                if ((lVar13 < 0) || (lVar1 <= lVar13)) {
                    /* WARNING: Does not return */
                  pcVar16 = (code *)SoftwareBreakpoint(1,0x100529354);
                  (*pcVar16)();
                }
                unaff_x20[2] = lVar13 + 1;
                lVar13 = unaff_x20[0xb] + 1;
                if (SCARRY8(unaff_x20[0xb],1)) {
                    /* WARNING: Does not return */
                  pcVar16 = (code *)SoftwareBreakpoint(1,0x100529358);
                  (*pcVar16)();
                }
                unaff_x20[0xb] = lVar13;
                if (lVar13 <= unaff_x20[4]) {
                  (**(code **)(local_78 + 8))(local_80,local_70);
                  (**(code **)(lVar15 + 8))(lVar11,puVar4);
                  (**(code **)(lVar3 + 8))(local_68,puVar7);
                  return;
                }
                *(undefined4 *)(puVar12 + -1) = 0;
                puVar12[-2] = 0x1ab;
                __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                          ("Fatal error",0xb,2,0xd000000000000039,0x80000001008bc700,
                           "SwiftProtobuf/JSONScanner.swift",0x1f,2);
                    /* WARNING: Does not return */
                pcVar16 = (code *)SoftwareBreakpoint(1,0x1005293ac);
                (*pcVar16)();
              }
            }
          }
          else if (lVar13 != unaff_x20[1] - lVar14) goto LAB_10052916c;
          FUN_1005363c8(0x2c);
          (**(code **)(local_78 + 8))(local_80,local_70);
          (**(code **)(lVar15 + 8))(lVar11,puVar4);
          puVar6 = local_68;
          (**(code **)(lVar3 + 8))();
          FUN_1005336f8();
        } while( true );
      }
    }
  }
  return;
}

