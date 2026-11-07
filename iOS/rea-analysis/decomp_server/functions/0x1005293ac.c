// rea decompile_all
// name: FUN_1005293ac
// address: 0x1005293ac
// body: available
// range: 0x1005293ac-0x100529aa3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100529850) */
/* WARNING: Removing unreachable block (ram,0x0001005298c4) */

void FUN_1005293ac(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  long *unaff_x20;
  long unaff_x21;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  code *pcVar14;
  undefined8 auStack_100 [2];
  long alStack_f0 [3];
  undefined8 *local_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  undefined8 local_b0;
  undefined8 *local_a8;
  undefined8 local_a0;
  long local_98;
  long local_90;
  long lStack_88;
  long local_80;
  undefined8 uStack_78;
  long local_70;
  long local_68;
  
  lVar13 = *(long *)(param_3 + -8);
  lVar3 = (long)alStack_f0 - (*(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_80 = *(long *)(param_4 + 8);
  puVar2 = (undefined8 *)0x0;
  local_b8 = lVar3;
  local_b0 = param_1;
  local_a0 = param_6;
  uStack_78 = param_2;
  _swift_getAssociatedTypeWitness();
  lVar11 = puVar2[-1];
  uVar8 = *(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_c0 = lVar3 - uVar8;
  lVar9 = local_c0 - uVar8;
  lVar3 = 0;
  local_98 = lVar9;
  __sSqMa(0,param_3);
  local_90 = *(long *)(lVar3 + -8);
  uVar8 = *(long *)(local_90 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_c8 = lVar9 - uVar8;
  local_a8 = (undefined8 *)(local_c8 - uVar8);
  lVar9 = (long)local_a8 - uVar8;
  puVar4 = (undefined8 *)0x0;
  puVar6 = puVar2;
  lStack_88 = lVar3;
  local_68 = lVar9;
  __sSqMa();
  local_70 = puVar4[-1];
  uVar8 = *(long *)(local_70 + 0x40) + 0xfU & 0xfffffffffffffff0;
  puVar12 = (undefined8 *)(lVar9 - uVar8);
  puVar10 = (undefined8 *)((long)puVar12 - uVar8);
  FUN_100535660();
  lVar3 = unaff_x20[2];
  lVar9 = *unaff_x20;
  if (lVar9 == 0) {
    if (lVar3 == 0) goto LAB_100529544;
  }
  else if (lVar3 == unaff_x20[1] - lVar9) goto LAB_100529544;
  if (*(char *)(lVar9 + lVar3) == 'n') {
    uVar8 = 0;
    FUN_100004bb4(&DAT_100aaa100,&DAT_1008386b0);
    puVar6 = (undefined8 *)&DAT_100aa8b50;
    _swift_initStaticObject();
    FUN_100536178();
    if ((uVar8 & 1) != 0) {
      return;
    }
  }
LAB_100529544:
  puVar5 = (undefined8 *)0x7b;
  FUN_1005363c8();
  if (unaff_x21 == 0) {
    lVar3 = unaff_x20[0xb] + -1;
    if (SBORROW8(unaff_x20[0xb],1)) {
                    /* WARNING: Does not return */
      pcVar14 = (code *)SoftwareBreakpoint(1,0x100529a48);
      (*pcVar14)();
    }
    unaff_x20[0xb] = lVar3;
    if (lVar3 < 0) {
      FUN_1004f98e4();
      _swift_allocError(&DAT_1009d03a0,puVar5,0,0);
      uVar7 = 0x13;
LAB_10052987c:
      puVar5[1] = uVar7;
      *puVar5 = 0;
      _swift_willThrow();
    }
    else {
      FUN_10053320c();
      if (((ulong)puVar5 & 1) == 0) {
        FUN_1005336f8();
        lVar3 = 0;
        alStack_f0[1] = lVar13;
        alStack_f0[2] = lVar11;
        local_d8 = puVar4;
        while( true ) {
          lVar9 = alStack_f0[1];
          local_d0 = lVar3;
          if ((puVar5 == (undefined8 *)0x22) && (puVar6 == (undefined8 *)0xe100000000000000)) {
            _swift_bridgeObjectRelease(0xe100000000000000);
          }
          else {
            __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      ();
            _swift_bridgeObjectRelease();
            if (((ulong)puVar5 & 1) == 0) {
              FUN_1004f98e4();
              _swift_allocError(&DAT_1009d03a0,puVar6,0,0);
              uVar7 = 0xb;
              puVar5 = puVar6;
              goto LAB_10052987c;
            }
          }
          *(undefined1 *)(unaff_x20 + 0xf) = 1;
          (**(code **)(lVar11 + 0x38))(puVar10,1,1,puVar2);
          lVar3 = local_d0;
          (**(code **)(local_80 + 0x20))(puVar10);
          if (lVar3 != 0) {
            pcVar14 = *(code **)(local_70 + 8);
            goto LAB_1005299a8;
          }
          *(undefined1 *)(unaff_x20 + 0xf) = 0;
          FUN_1005363c8(0x3a);
          lVar13 = local_68;
          pcVar14 = *(code **)(lVar9 + 0x38);
          (*pcVar14)(local_68,1,1,param_3);
          FUN_100527c98(lVar13,param_3,local_a0);
          local_d0 = lVar3;
          (**(code **)(local_70 + 0x10))(puVar12,puVar10,local_d8);
          puVar6 = puVar12;
          (**(code **)(lVar11 + 0x30))(puVar12,1,puVar2);
          lVar13 = local_70;
          lVar3 = local_98;
          puVar4 = local_d8;
          if ((int)puVar6 == 1) break;
          (**(code **)(lVar11 + 0x20))(local_98,puVar12,puVar2);
          puVar6 = local_a8;
          (**(code **)(local_90 + 0x10))(local_a8,local_68,lStack_88);
          puVar4 = puVar6;
          (**(code **)(lVar9 + 0x30))(puVar6,1,param_3);
          lVar13 = local_b8;
          if ((int)puVar4 == 1) {
            (**(code **)(lVar11 + 8))(lVar3,puVar2);
            lVar3 = lStack_88;
            lVar11 = local_90;
            (**(code **)(local_90 + 8))(puVar6,lStack_88);
            puVar12 = puVar6;
            puVar4 = local_d8;
            lVar13 = local_70;
            goto LAB_100529934;
          }
          (**(code **)(lVar9 + 0x20))(local_b8,puVar6,param_3);
          lVar1 = local_c0;
          (**(code **)(lVar11 + 0x10))(local_c0,lVar3,puVar2);
          lVar3 = local_c8;
          (**(code **)(lVar9 + 0x10))(local_c8,lVar13,param_3);
          (*pcVar14)(lVar3,0,1,param_3);
          lVar11 = local_80;
          _swift_getAssociatedConformanceWitness
                    (local_80,uStack_78,puVar2,0x100900ffc,&TargetProtocolRequirement_100901004);
          uVar7 = 0;
          __sSDMa(0,puVar2,param_3,lVar11);
          lVar11 = alStack_f0[2];
          __sSDyq_Sgxcis(lVar3,lVar1,uVar7);
          (**(code **)(lVar9 + 8))(lVar13,param_3);
          (**(code **)(lVar11 + 8))(local_98,puVar2);
          FUN_100535660();
          lVar3 = local_d0;
          puVar4 = local_d8;
          lVar9 = unaff_x20[2];
          lVar13 = *unaff_x20;
          if (lVar13 == 0) {
            if (lVar9 != 0) goto LAB_1005297f8;
          }
          else if (lVar9 != unaff_x20[1] - lVar13) {
LAB_1005297f8:
            if (*(char *)(lVar13 + lVar9) == '}') {
              lVar11 = 0;
              if (lVar13 != 0) {
                lVar11 = unaff_x20[1] - lVar13;
              }
              if ((lVar9 < 0) || (lVar11 <= lVar9)) {
                    /* WARNING: Does not return */
                pcVar14 = (code *)SoftwareBreakpoint(1,0x100529a4c);
                (*pcVar14)();
              }
              unaff_x20[2] = lVar9 + 1;
              lVar11 = unaff_x20[0xb] + 1;
              if (SCARRY8(unaff_x20[0xb],1)) {
                    /* WARNING: Does not return */
                pcVar14 = (code *)SoftwareBreakpoint(1,0x100529a50);
                (*pcVar14)();
              }
              unaff_x20[0xb] = lVar11;
              if (lVar11 <= unaff_x20[4]) {
                (**(code **)(local_90 + 8))(local_68,lStack_88);
                (**(code **)(local_70 + 8))(puVar10,puVar4);
                return;
              }
              *(undefined4 *)(puVar10 + -1) = 0;
              puVar10[-2] = 0x1ab;
              __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                        ("Fatal error",0xb,2,0xd000000000000039,0x80000001008bc700,
                         "SwiftProtobuf/JSONScanner.swift",0x1f,2);
                    /* WARNING: Does not return */
              pcVar14 = (code *)SoftwareBreakpoint(1,0x100529aa4);
              (*pcVar14)();
            }
          }
          FUN_1005363c8(0x2c);
          if (lVar3 != 0) {
            (**(code **)(local_90 + 8))(local_68,lStack_88);
            pcVar14 = *(code **)(local_70 + 8);
LAB_1005299a8:
            (*pcVar14)(puVar10,puVar4);
            return;
          }
          (**(code **)(local_90 + 8))(local_68,lStack_88);
          puVar5 = puVar10;
          puVar6 = puVar4;
          (**(code **)(local_70 + 8))();
          FUN_1005336f8();
        }
        (**(code **)(local_70 + 8))(puVar12,local_d8);
        lVar3 = lStack_88;
        lVar11 = local_90;
LAB_100529934:
        FUN_1004f98e4();
        _swift_allocError(&DAT_1009d03a0,puVar12,0,0);
        puVar12[1] = 3;
        *puVar12 = 0;
        _swift_willThrow();
        (**(code **)(lVar11 + 8))(local_68,lVar3);
        pcVar14 = *(code **)(lVar13 + 8);
        goto LAB_1005299a8;
      }
    }
  }
  return;
}

