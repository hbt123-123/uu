// rea decompile_all
// name: FUN_10052856c
// address: 0x10052856c
// body: available
// range: 0x10052856c-0x100528cb7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100528ab4) */
/* WARNING: Removing unreachable block (ram,0x000100528ad0) */

void FUN_10052856c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  long *unaff_x20;
  long unaff_x21;
  code *pcVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined8 auStack_100 [2];
  long local_f0 [2];
  undefined8 *local_e0;
  long local_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  undefined8 local_b8;
  undefined8 *local_b0;
  long local_a8;
  undefined8 uStack_a0;
  long local_98;
  long local_90;
  long lStack_88;
  long local_80;
  undefined8 uStack_78;
  long local_70;
  long local_68;
  
  local_a8 = *(long *)(param_5 + 8);
  lVar2 = 0;
  local_b8 = param_1;
  uStack_a0 = param_3;
  _swift_getAssociatedTypeWitness();
  lVar15 = *(long *)(lVar2 + -8);
  lVar4 = (long)local_f0 - (*(long *)(lVar15 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_80 = *(long *)(param_4 + 8);
  puVar3 = (undefined8 *)0x0;
  local_c0 = lVar4;
  uStack_78 = param_2;
  _swift_getAssociatedTypeWitness
            (0,local_80,param_2,0x100900ffc,&TargetProtocolRequirement_10090100c);
  lVar13 = puVar3[-1];
  uVar9 = *(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_c8 = lVar4 - uVar9;
  lVar10 = local_c8 - uVar9;
  lVar4 = 0;
  local_98 = lVar10;
  __sSqMa(0,lVar2);
  local_90 = *(long *)(lVar4 + -8);
  uVar9 = *(long *)(local_90 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_d0 = lVar10 - uVar9;
  local_b0 = (undefined8 *)(local_d0 - uVar9);
  lVar10 = (long)local_b0 - uVar9;
  puVar5 = (undefined8 *)0x0;
  puVar7 = puVar3;
  lStack_88 = lVar4;
  local_68 = lVar10;
  __sSqMa();
  local_70 = puVar5[-1];
  uVar9 = *(long *)(local_70 + 0x40) + 0xfU & 0xfffffffffffffff0;
  puVar14 = (undefined8 *)(lVar10 - uVar9);
  puVar11 = (undefined8 *)((long)puVar14 - uVar9);
  FUN_100535660();
  lVar4 = unaff_x20[2];
  lVar10 = *unaff_x20;
  if (lVar10 == 0) {
    if (lVar4 == 0) goto LAB_100528730;
  }
  else if (lVar4 == unaff_x20[1] - lVar10) goto LAB_100528730;
  if (*(char *)(lVar10 + lVar4) == 'n') {
    uVar9 = 0;
    FUN_100004bb4(&DAT_100aaa100,&DAT_1008386b0);
    puVar7 = (undefined8 *)&DAT_100aa8b50;
    _swift_initStaticObject();
    FUN_100536178();
    if ((uVar9 & 1) != 0) {
      return;
    }
  }
LAB_100528730:
  puVar6 = (undefined8 *)0x7b;
  FUN_1005363c8();
  if (unaff_x21 == 0) {
    lVar4 = unaff_x20[0xb] + -1;
    if (SBORROW8(unaff_x20[0xb],1)) {
                    /* WARNING: Does not return */
      pcVar12 = (code *)SoftwareBreakpoint(1,0x100528c5c);
      (*pcVar12)();
    }
    unaff_x20[0xb] = lVar4;
    if (lVar4 < 0) {
      FUN_1004f98e4();
      _swift_allocError(&DAT_1009d03a0,puVar6,0,0);
      uVar8 = 0x13;
LAB_100528798:
      puVar6[1] = uVar8;
      *puVar6 = 0;
      _swift_willThrow();
    }
    else {
      FUN_10053320c();
      if (((ulong)puVar6 & 1) == 0) {
        FUN_1005336f8();
        local_f0[0] = lVar15;
        local_f0[1] = lVar13;
        local_e0 = puVar5;
        do {
          lVar4 = local_f0[0];
          local_d8 = 0;
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
              uVar8 = 0xb;
              puVar6 = puVar7;
              goto LAB_100528798;
            }
          }
          *(undefined1 *)(unaff_x20 + 0xf) = 1;
          (**(code **)(lVar13 + 0x38))(puVar11,1,1,puVar3);
          lVar10 = local_d8;
          (**(code **)(local_80 + 0x20))(puVar11);
          if (lVar10 != 0) {
            pcVar12 = *(code **)(local_70 + 8);
            goto LAB_100528b90;
          }
          *(undefined1 *)(unaff_x20 + 0xf) = 0;
          FUN_1005363c8(0x3a);
          lVar15 = local_68;
          pcVar12 = *(code **)(lVar4 + 0x38);
          (*pcVar12)(local_68,1,1,lVar2);
          (**(code **)(local_a8 + 0x20))(lVar15);
          local_d8 = lVar10;
          (**(code **)(local_70 + 0x10))(puVar14,puVar11,local_e0);
          puVar7 = puVar14;
          (**(code **)(lVar13 + 0x30))(puVar14,1,puVar3);
          lVar15 = local_70;
          lVar10 = local_98;
          puVar5 = local_e0;
          if ((int)puVar7 == 1) {
            (**(code **)(local_70 + 8))(puVar14,local_e0);
            lVar2 = lStack_88;
            lVar13 = local_90;
LAB_100528b40:
            FUN_1004f98e4();
            _swift_allocError(&DAT_1009d03a0,puVar14,0,0);
            puVar14[1] = 3;
            *puVar14 = 0;
            _swift_willThrow();
            (**(code **)(lVar13 + 8))(local_68,lVar2);
            pcVar12 = *(code **)(lVar15 + 8);
LAB_100528b90:
            (*pcVar12)(puVar11,puVar5);
            return;
          }
          (**(code **)(lVar13 + 0x20))(local_98,puVar14,puVar3);
          puVar7 = local_b0;
          (**(code **)(local_90 + 0x10))(local_b0,local_68,lStack_88);
          puVar5 = puVar7;
          (**(code **)(lVar4 + 0x30))(puVar7,1,lVar2);
          lVar15 = local_c0;
          if ((int)puVar5 == 1) {
            (**(code **)(lVar13 + 8))(lVar10,puVar3);
            lVar2 = lStack_88;
            lVar13 = local_90;
            (**(code **)(local_90 + 8))(puVar7,lStack_88);
            puVar14 = puVar7;
            puVar5 = local_e0;
            lVar15 = local_70;
            goto LAB_100528b40;
          }
          (**(code **)(lVar4 + 0x20))(local_c0,puVar7,lVar2);
          lVar1 = local_c8;
          (**(code **)(lVar13 + 0x10))(local_c8,lVar10,puVar3);
          lVar10 = local_d0;
          (**(code **)(lVar4 + 0x10))(local_d0,lVar15,lVar2);
          (*pcVar12)(lVar10,0,1,lVar2);
          lVar13 = local_80;
          _swift_getAssociatedConformanceWitness
                    (local_80,uStack_78,puVar3,0x100900ffc,&TargetProtocolRequirement_100901004);
          uVar8 = 0;
          __sSDMa(0,puVar3,lVar2,lVar13);
          lVar13 = local_f0[1];
          __sSDyq_Sgxcis(lVar10,lVar1,uVar8);
          (**(code **)(lVar4 + 8))(lVar15,lVar2);
          (**(code **)(lVar13 + 8))(local_98,puVar3);
          FUN_100535660();
          lVar10 = local_d8;
          puVar5 = local_e0;
          lVar4 = unaff_x20[2];
          lVar15 = *unaff_x20;
          if (lVar15 == 0) {
            if (lVar4 != 0) goto LAB_100528a5c;
          }
          else if (lVar4 != unaff_x20[1] - lVar15) {
LAB_100528a5c:
            if (*(char *)(lVar15 + lVar4) == '}') {
              lVar13 = 0;
              if (lVar15 != 0) {
                lVar13 = unaff_x20[1] - lVar15;
              }
              if ((lVar4 < 0) || (lVar13 <= lVar4)) {
                    /* WARNING: Does not return */
                pcVar12 = (code *)SoftwareBreakpoint(1,0x100528c60);
                (*pcVar12)();
              }
              unaff_x20[2] = lVar4 + 1;
              lVar13 = unaff_x20[0xb] + 1;
              if (SCARRY8(unaff_x20[0xb],1)) {
                    /* WARNING: Does not return */
                pcVar12 = (code *)SoftwareBreakpoint(1,0x100528c64);
                (*pcVar12)();
              }
              unaff_x20[0xb] = lVar13;
              if (lVar13 <= unaff_x20[4]) {
                (**(code **)(local_90 + 8))(local_68,lStack_88);
                (**(code **)(local_70 + 8))(puVar11,puVar5);
                return;
              }
              *(undefined4 *)(puVar11 + -1) = 0;
              puVar11[-2] = 0x1ab;
              __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                        ("Fatal error",0xb,2,0xd000000000000039,0x80000001008bc700,
                         "SwiftProtobuf/JSONScanner.swift",0x1f,2);
                    /* WARNING: Does not return */
              pcVar12 = (code *)SoftwareBreakpoint(1,0x100528cb8);
              (*pcVar12)();
            }
          }
          FUN_1005363c8(0x2c);
          if (lVar10 != 0) {
            (**(code **)(local_90 + 8))(local_68,lStack_88);
            (**(code **)(local_70 + 8))(puVar11,puVar5);
            return;
          }
          (**(code **)(local_90 + 8))(local_68,lStack_88);
          puVar6 = puVar11;
          puVar7 = puVar5;
          (**(code **)(local_70 + 8))();
          FUN_1005336f8();
        } while( true );
      }
    }
  }
  return;
}

