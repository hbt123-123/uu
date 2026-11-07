// rea decompile_all
// name: FUN_100502a5c
// address: 0x100502a5c
// body: available
// range: 0x100502a5c-0x10050315b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100502a5c(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                  undefined8 param_5,long param_6)

{
  bool bVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 uVar10;
  undefined1 *puVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  long lVar18;
  long *unaff_x20;
  long unaff_x21;
  undefined1 *puVar19;
  char *pcVar20;
  long lVar21;
  code *pcVar22;
  long lVar23;
  undefined1 auStack_260 [8];
  undefined1 *local_258;
  long local_250;
  code *local_248;
  undefined1 *local_240;
  long local_238;
  long local_230;
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
  
  lVar9 = *(long *)(param_4 + 8);
  lVar3 = 0;
  _swift_getAssociatedTypeWitness();
  lVar21 = *(long *)(lVar3 + -8);
  puVar11 = auStack_260 + -(*(long *)(lVar21 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  __sSqMa(0,param_3);
  lVar12 = *(long *)(lVar4 + -8);
  uVar13 = *(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar15 = ((long)puVar11 - uVar13) - uVar13;
  puVar19 = (undefined1 *)(lVar15 - uVar13);
  lVar5 = 0;
  __sSqMa(0,lVar3);
  lVar18 = *(long *)(lVar5 + -8);
  uVar14 = *(long *)(lVar18 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_238 = (long)puVar19 - uVar14;
  puVar16 = (undefined1 *)(local_238 - uVar14);
  if (*(char *)((long)unaff_x20 + 0x21) == '\x02') {
    local_230 = (long)puVar11 - uVar13;
    (**(code **)(lVar21 + 0x38))(puVar16,1,1,lVar3);
    lVar23 = *(long *)(param_3 + -8);
    pcVar22 = *(code **)(lVar23 + 0x38);
    puVar6 = puVar19;
    (*pcVar22)(puVar19,1,1,param_3);
    FUN_1004fdea4();
    if (unaff_x21 == 0) {
      local_250 = lVar23;
      local_248 = pcVar22;
      if (puVar6 < (undefined1 *)0x7fffffff) {
        puVar17 = (undefined1 *)unaff_x20[1];
        local_240 = puVar19;
        if ((long)puVar17 < 0) {
                    /* WARNING: Does not return */
          pcVar22 = (code *)SoftwareBreakpoint(1,0x100503158);
          (*pcVar22)();
        }
        if (puVar6 <= puVar17) {
          pcVar20 = (char *)*unaff_x20;
          *unaff_x20 = (long)(pcVar20 + (long)puVar6);
          unaff_x20[1] = (long)puVar17 - (long)puVar6;
          local_258 = puVar6;
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
          puStack_100 = local_258;
          uStack_f0 = 0;
          local_108 = pcVar20;
          local_f8 = pcVar20;
          FUN_100128b30(auStack_1d0,&uStack_d8,&DAT_100aaa0e8,&DAT_1008358c0);
          local_a0 = local_140;
          local_98 = local_138;
          puVar19 = auStack_1a8;
          FUN_100506304();
          local_90 = local_130;
          puVar6 = local_258;
          local_f8 = pcVar20;
          if (local_258 != (undefined1 *)0x0) {
            do {
              uStack_f0 = 0;
              pcVar20 = local_f8 + 1;
              uVar13 = (ulong)*local_f8;
              puVar17 = puVar6 + -1;
              if ((long)uVar13 < 0) {
                if ((undefined1 *)0x1 < puVar6) {
                  uVar13 = uVar13 & 0x7f;
                  pcVar20 = local_f8 + 2;
                  uVar14 = 7;
                  while (uVar13 = ((ulong)(byte)pcVar20[-1] & 0x7f) << (uVar14 & 0x3f) | uVar13,
                        pcVar20[-1] < '\0') {
                    if (puVar17 < (undefined1 *)0x2) goto LAB_1005030cc;
                    pcVar20 = pcVar20 + 1;
                    puVar17 = puVar17 + -1;
                    bVar1 = 0x38 < uVar14;
                    uVar14 = uVar14 + 7;
                    if (bVar1) goto LAB_1005030cc;
                  }
                  puVar17 = puVar17 + -1;
                  local_108 = pcVar20;
                  puStack_100 = puVar17;
                  if (uVar13 < 0xffffffff) goto LAB_100502ddc;
                }
LAB_1005030cc:
                FUN_100506290();
                _swift_allocError(&DAT_1009cdf18,puVar19,0,0);
                uVar10 = 3;
LAB_1005030f0:
                *puVar19 = uVar10;
                goto LAB_1005030f4;
              }
LAB_100502ddc:
              uVar2 = (uint)uVar13 & 7;
              local_108 = pcVar20;
              puStack_100 = puVar17;
              if (uVar13 < 8 || 5 < uVar2) goto LAB_1005030cc;
              local_e0 = uVar13 >> 3;
              if (uVar2 == 4) {
                local_e8 = CONCAT11(4,(undefined1)local_e8);
                goto LAB_1005030cc;
              }
              local_e8 = CONCAT11((char)uVar2,(undefined1)local_e8);
              if (local_e0 != 2) {
                if (local_e0 == 1) {
                  puVar19 = puVar16;
                  (**(code **)(lVar9 + 0x20))
                            (puVar16,&local_108,&DAT_1009cdc68,&PTR_PTR_1009cdcb0,param_2);
                  goto LAB_100502eb4;
                }
                puStack_100 = puVar17 + ((long)pcVar20 - (long)local_f8);
                if (SCARRY8((long)puVar17,(long)pcVar20 - (long)local_f8)) {
                    /* WARNING: Does not return */
                  pcVar22 = (code *)SoftwareBreakpoint(1,0x10050315c);
                  puStack_100 = puVar17;
                  (*pcVar22)();
                }
                local_108 = local_f8;
                if (0 < (long)puStack_100) {
                  FUN_1004fdea4();
                  if ((((undefined1 *)0xfffffffe < puVar19) || (puVar19 < (undefined1 *)0x8)) ||
                     (uVar2 = (uint)puVar19 & 7, 5 < uVar2)) goto LAB_1005030cc;
                  local_e8 = CONCAT11((char)uVar2,(undefined1)local_e8);
                  local_e0 = (ulong)puVar19 >> 3;
                  FUN_100504f64();
                  goto LAB_100502eb4;
                }
                FUN_100506290();
                _swift_allocError(&DAT_1009cdf18,puVar19,0,0);
                uVar10 = 1;
                goto LAB_1005030f0;
              }
              puVar19 = local_240;
              FUN_100500e88(local_240,param_3,param_6);
LAB_100502eb4:
              local_f8 = local_108;
              uStack_f0 = 0;
              puVar6 = puStack_100;
            } while (0 < (long)puStack_100);
            if (puStack_100 != (undefined1 *)0x0) {
              FUN_100506290();
              _swift_allocError(&DAT_1009cdf18,puVar19,0,0);
              *puVar19 = 0;
LAB_1005030f4:
              _swift_willThrow();
              (**(code **)(lVar12 + 8))(local_240,lVar4);
              (**(code **)(lVar18 + 8))(puVar16,lVar5);
              FUN_100506304(&local_108);
              return;
            }
          }
          lVar23 = local_238;
          uStack_f0 = 0;
          (**(code **)(lVar18 + 0x10))(local_238,puVar16,lVar5);
          pcVar22 = *(code **)(lVar21 + 0x30);
          lVar7 = lVar23;
          (*pcVar22)(lVar23,1,lVar3);
          if ((int)lVar7 == 1) {
            (**(code **)(lVar9 + 0x18))(puVar11,param_2);
            lVar21 = lVar23;
            (*pcVar22)(lVar23,1,lVar3);
            if ((int)lVar21 != 1) {
              (**(code **)(lVar18 + 8))(lVar23,lVar5);
            }
          }
          else {
            (**(code **)(lVar21 + 0x20))(puVar11,lVar23,lVar3);
          }
          lVar23 = local_230;
          (**(code **)(lVar12 + 0x10))(local_230,local_240,lVar4);
          lVar21 = local_250;
          pcVar22 = *(code **)(local_250 + 0x30);
          lVar7 = lVar23;
          (*pcVar22)(lVar23,1,param_3);
          if ((int)lVar7 == 1) {
            (**(code **)(param_6 + 0x10))(lVar15,param_3);
            lVar21 = lVar23;
            (*pcVar22)(lVar23,1,param_3);
            if ((int)lVar21 != 1) {
              (**(code **)(lVar12 + 8))(lVar23,lVar4);
            }
          }
          else {
            (**(code **)(lVar21 + 0x20))(lVar15,lVar23,param_3);
          }
          (*local_248)(lVar15,0,1,param_3);
          _swift_getAssociatedConformanceWitness
                    (lVar9,param_2,lVar3,0x100900ffc,&TargetProtocolRequirement_100901004);
          uVar8 = 0;
          __sSDMa(0,lVar3,param_3,lVar9);
          __sSDyq_Sgxcis(lVar15,puVar11,uVar8);
          (**(code **)(lVar12 + 8))(local_240,lVar4);
          (**(code **)(lVar18 + 8))(puVar16,lVar5);
          FUN_100506304(&local_108);
          *(undefined1 *)(unaff_x20 + 4) = 1;
          return;
        }
        FUN_100506290();
        _swift_allocError(&DAT_1009cdf18,puVar6,0,0);
        *puVar6 = 1;
        _swift_willThrow();
        puVar19 = local_240;
      }
      else {
        FUN_100506290();
        _swift_allocError(&DAT_1009cdf18,puVar6,0,0);
        *puVar6 = 3;
        _swift_willThrow();
      }
    }
    (**(code **)(lVar12 + 8))(puVar19,lVar4);
    (**(code **)(lVar18 + 8))(puVar16,lVar5);
  }
  return;
}

