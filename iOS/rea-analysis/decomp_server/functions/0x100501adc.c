// rea decompile_all
// name: FUN_100501adc
// address: 0x100501adc
// body: available
// range: 0x100501adc-0x10050220b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100501f08) */

void FUN_100501adc(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5)

{
  bool bVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined1 uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  long lVar20;
  long *unaff_x20;
  long unaff_x21;
  undefined1 *puVar21;
  char *pcVar22;
  code *pcVar23;
  long lVar24;
  long lVar25;
  undefined1 *local_260;
  long local_258;
  code *local_250;
  undefined1 *local_248;
  long local_240;
  long local_238;
  undefined1 auStack_1d0 [40];
  undefined1 auStack_1a8 [48];
  undefined1 auStack_178 [56];
  undefined8 local_140;
  undefined1 local_138;
  undefined8 local_130;
  char *local_108;
  undefined1 *puStack_100;
  char *local_f8;
  undefined8 uStack_f0;
  undefined2 local_e8;
  ulong local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined1 local_a8;
  undefined8 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  lVar10 = *(long *)(param_4 + 8);
  lVar3 = 0;
  _swift_getAssociatedTypeWitness();
  lVar25 = *(long *)(lVar3 + -8);
  lVar13 = (long)&local_260 - (*(long *)(lVar25 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar11 = *(long *)(param_5 + 8);
  lVar4 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,lVar11,param_3,0x100900ffc,&TargetProtocolRequirement_10090100c);
  lVar5 = 0;
  __sSqMa(0,lVar4);
  lVar14 = *(long *)(lVar5 + -8);
  uVar15 = *(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar17 = (lVar13 - uVar15) - uVar15;
  puVar21 = (undefined1 *)(lVar17 - uVar15);
  lVar6 = 0;
  __sSqMa(0,lVar3);
  lVar20 = *(long *)(lVar6 + -8);
  uVar16 = *(long *)(lVar20 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_240 = (long)puVar21 - uVar16;
  puVar18 = (undefined1 *)(local_240 - uVar16);
  if (*(char *)((long)unaff_x20 + 0x21) == '\x02') {
    local_238 = lVar13 - uVar15;
    (**(code **)(lVar25 + 0x38))(puVar18,1,1,lVar3);
    lVar24 = *(long *)(lVar4 + -8);
    pcVar23 = *(code **)(lVar24 + 0x38);
    puVar7 = puVar21;
    (*pcVar23)(puVar21,1,1,lVar4);
    FUN_1004fdea4();
    if (unaff_x21 == 0) {
      local_258 = lVar24;
      local_250 = pcVar23;
      if (puVar7 < (undefined1 *)0x7fffffff) {
        puVar19 = (undefined1 *)unaff_x20[1];
        local_248 = puVar21;
        if ((long)puVar19 < 0) {
                    /* WARNING: Does not return */
          pcVar23 = (code *)SoftwareBreakpoint(1,0x100502208);
          (*pcVar23)();
        }
        if (puVar7 <= puVar19) {
          pcVar22 = (char *)*unaff_x20;
          *unaff_x20 = (long)(pcVar22 + (long)puVar7);
          unaff_x20[1] = (long)puVar19 - (long)puVar7;
          local_260 = puVar7;
          FUN_1005062d0(unaff_x20,auStack_1a8);
          FUN_10007f314(auStack_178,auStack_1d0,&DAT_100aaa0e8,&DAT_1008358c0);
          local_e8 = 1;
          uStack_d8 = 0;
          local_e0 = 0;
          uStack_c8 = 0;
          local_d0 = 0;
          uStack_b8 = 0;
          local_c0 = 0;
          local_b0 = 0;
          local_a8 = 1;
          uStack_80 = 0xf000000000000000;
          local_88 = 0;
          uStack_70 = 0xf000000000000000;
          uStack_78 = 0;
          puStack_100 = local_260;
          uStack_f0 = 0;
          local_108 = pcVar22;
          local_f8 = pcVar22;
          FUN_100128b30(auStack_1d0,&uStack_d8,&DAT_100aaa0e8,&DAT_1008358c0);
          local_a0 = local_140;
          local_98 = local_138;
          puVar21 = auStack_1a8;
          FUN_100506304();
          local_90 = local_130;
          puVar7 = local_260;
          local_f8 = pcVar22;
          if (local_260 != (undefined1 *)0x0) {
            do {
              uStack_f0 = 0;
              pcVar22 = local_f8 + 1;
              uVar15 = (ulong)*local_f8;
              puVar19 = puVar7 + -1;
              if ((long)uVar15 < 0) {
                if ((undefined1 *)0x1 < puVar7) {
                  uVar15 = uVar15 & 0x7f;
                  pcVar22 = local_f8 + 2;
                  uVar16 = 7;
                  while (uVar15 = ((ulong)(byte)pcVar22[-1] & 0x7f) << (uVar16 & 0x3f) | uVar15,
                        pcVar22[-1] < '\0') {
                    if (puVar19 < (undefined1 *)0x2) goto LAB_10050217c;
                    pcVar22 = pcVar22 + 1;
                    puVar19 = puVar19 + -1;
                    bVar1 = 0x38 < uVar16;
                    uVar16 = uVar16 + 7;
                    if (bVar1) goto LAB_10050217c;
                  }
                  puVar19 = puVar19 + -1;
                  local_108 = pcVar22;
                  puStack_100 = puVar19;
                  if (uVar15 < 0xffffffff) goto LAB_100501e84;
                }
LAB_10050217c:
                FUN_100506290();
                _swift_allocError(&DAT_1009cdf18,puVar21,0,0);
                uVar12 = 3;
LAB_1005021a0:
                *puVar21 = uVar12;
                goto LAB_1005021a4;
              }
LAB_100501e84:
              uVar2 = (uint)uVar15 & 7;
              local_108 = pcVar22;
              puStack_100 = puVar19;
              if (uVar15 < 8 || 5 < uVar2) goto LAB_10050217c;
              local_e0 = uVar15 >> 3;
              if (uVar2 == 4) {
                local_e8 = CONCAT11(4,(undefined1)local_e8);
                goto LAB_10050217c;
              }
              local_e8 = CONCAT11((char)uVar2,(undefined1)local_e8);
              if (local_e0 != 2) {
                if (local_e0 == 1) {
                  pcVar23 = *(code **)(lVar10 + 0x20);
                  puVar21 = puVar18;
                  uVar9 = param_2;
                  goto LAB_100501ef4;
                }
                puStack_100 = puVar19 + ((long)pcVar22 - (long)local_f8);
                if (SCARRY8((long)puVar19,(long)pcVar22 - (long)local_f8)) {
                    /* WARNING: Does not return */
                  pcVar23 = (code *)SoftwareBreakpoint(1,0x10050220c);
                  puStack_100 = puVar19;
                  (*pcVar23)();
                }
                local_108 = local_f8;
                if (0 < (long)puStack_100) {
                  FUN_1004fdea4();
                  if ((((undefined1 *)0xfffffffe < puVar21) || (puVar21 < (undefined1 *)0x8)) ||
                     (uVar2 = (uint)puVar21 & 7, 5 < uVar2)) goto LAB_10050217c;
                  local_e8 = CONCAT11((char)uVar2,(undefined1)local_e8);
                  local_e0 = (ulong)puVar21 >> 3;
                  FUN_100504f64();
                  goto LAB_100501f70;
                }
                FUN_100506290();
                _swift_allocError(&DAT_1009cdf18,puVar21,0,0);
                uVar12 = 1;
                goto LAB_1005021a0;
              }
              pcVar23 = *(code **)(lVar11 + 0x20);
              puVar21 = local_248;
              uVar9 = param_3;
LAB_100501ef4:
              (*pcVar23)(puVar21,&local_108,&DAT_1009cdc68,&PTR_PTR_1009cdcb0,uVar9);
LAB_100501f70:
              local_f8 = local_108;
              uStack_f0 = 0;
              puVar7 = puStack_100;
            } while (0 < (long)puStack_100);
            if (puStack_100 != (undefined1 *)0x0) {
              FUN_100506290();
              _swift_allocError(&DAT_1009cdf18,puVar21,0,0);
              *puVar21 = 0;
LAB_1005021a4:
              _swift_willThrow();
              (**(code **)(lVar14 + 8))(local_248,lVar5);
              (**(code **)(lVar20 + 8))(puVar18,lVar6);
              FUN_100506304(&local_108);
              return;
            }
          }
          lVar24 = local_240;
          uStack_f0 = 0;
          (**(code **)(lVar20 + 0x10))(local_240,puVar18,lVar6);
          pcVar23 = *(code **)(lVar25 + 0x30);
          lVar8 = lVar24;
          (*pcVar23)(lVar24,1,lVar3);
          if ((int)lVar8 == 1) {
            (**(code **)(lVar10 + 0x18))(lVar13,param_2);
            lVar25 = lVar24;
            (*pcVar23)(lVar24,1,lVar3);
            if ((int)lVar25 != 1) {
              (**(code **)(lVar20 + 8))(lVar24,lVar6);
            }
          }
          else {
            (**(code **)(lVar25 + 0x20))(lVar13,lVar24,lVar3);
          }
          lVar24 = local_238;
          (**(code **)(lVar14 + 0x10))(local_238,local_248,lVar5);
          lVar25 = local_258;
          pcVar23 = *(code **)(local_258 + 0x30);
          lVar8 = lVar24;
          (*pcVar23)(lVar24,1,lVar4);
          if ((int)lVar8 == 1) {
            (**(code **)(lVar11 + 0x18))(lVar17,param_3);
            lVar11 = lVar24;
            (*pcVar23)(lVar24,1,lVar4);
            if ((int)lVar11 != 1) {
              (**(code **)(lVar14 + 8))(lVar24,lVar5);
            }
          }
          else {
            (**(code **)(lVar25 + 0x20))(lVar17,lVar24,lVar4);
          }
          (*local_250)(lVar17,0,1,lVar4);
          _swift_getAssociatedConformanceWitness
                    (lVar10,param_2,lVar3,0x100900ffc,&TargetProtocolRequirement_100901004);
          uVar9 = 0;
          __sSDMa(0,lVar3,lVar4,lVar10);
          __sSDyq_Sgxcis(lVar17,lVar13,uVar9);
          (**(code **)(lVar14 + 8))(local_248,lVar5);
          (**(code **)(lVar20 + 8))(puVar18,lVar6);
          FUN_100506304(&local_108);
          *(undefined1 *)(unaff_x20 + 4) = 1;
          return;
        }
        FUN_100506290();
        _swift_allocError(&DAT_1009cdf18,puVar7,0,0);
        *puVar7 = 1;
        _swift_willThrow();
        puVar21 = local_248;
      }
      else {
        FUN_100506290();
        _swift_allocError(&DAT_1009cdf18,puVar7,0,0);
        *puVar7 = 3;
        _swift_willThrow();
      }
    }
    (**(code **)(lVar14 + 8))(puVar21,lVar5);
    (**(code **)(lVar20 + 8))(puVar18,lVar6);
  }
  return;
}

