// rea decompile_all
// name: FUN_10050220c
// address: 0x10050220c
// body: available
// range: 0x10050220c-0x100502a5b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100502690) */
/* WARNING: Removing unreachable block (ram,0x0001005029dc) */

void FUN_10050220c(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5)

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
  code *pcVar14;
  undefined1 *puVar15;
  long lVar16;
  long lVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  char *pcVar20;
  long lVar21;
  ulong uVar22;
  long *unaff_x20;
  long unaff_x21;
  long lVar23;
  long lVar24;
  char *pcVar25;
  code *pcVar26;
  undefined1 *puVar27;
  undefined1 *puVar28;
  undefined1 auStack_280 [8];
  long local_278;
  code *local_270;
  long local_268;
  undefined1 *local_260;
  long local_258;
  long local_250;
  long local_248;
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
  lVar23 = *(long *)(lVar3 + -8);
  puVar11 = auStack_280 + -(*(long *)(lVar23 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  __sSqMa(0,param_3);
  lVar12 = *(long *)(lVar4 + -8);
  uVar13 = *(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar16 = (long)puVar11 - uVar13;
  lVar17 = lVar16 - uVar13;
  puVar27 = (undefined1 *)(lVar17 - uVar13);
  puVar28 = puVar27 + -uVar13;
  lVar5 = 0;
  __sSqMa(0,lVar3);
  lVar21 = *(long *)(lVar5 + -8);
  uVar13 = *(long *)(lVar21 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_268 = (long)puVar28 - uVar13;
  puVar18 = (undefined1 *)(local_268 - uVar13);
  if (*(char *)((long)unaff_x20 + 0x21) == '\x02') {
    (**(code **)(lVar23 + 0x38))(puVar18,1,1,lVar3);
    lVar24 = *(long *)(param_3 + -8);
    pcVar14 = *(code **)(lVar24 + 0x38);
    puVar6 = puVar28;
    (*pcVar14)(puVar28,1,1,param_3);
    FUN_1004fdea4();
    if (unaff_x21 == 0) {
      local_258 = lVar24;
      local_250 = param_3;
      local_248 = lVar3;
      if (puVar6 < (undefined1 *)0x7fffffff) {
        puVar19 = (undefined1 *)unaff_x20[1];
        if ((long)puVar19 < 0) {
                    /* WARNING: Does not return */
          pcVar14 = (code *)SoftwareBreakpoint(1,0x100502a58);
          (*pcVar14)();
        }
        if (puVar6 <= puVar19) {
          pcVar25 = (char *)*unaff_x20;
          *unaff_x20 = (long)(pcVar25 + (long)puVar6);
          unaff_x20[1] = (long)puVar19 - (long)puVar6;
          local_260 = puVar6;
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
          local_108 = pcVar25;
          local_f8 = pcVar25;
          FUN_100128b30(auStack_1d0,&uStack_d8,&DAT_100aaa0e8,&DAT_1008358c0);
          local_a0 = local_140;
          local_98 = local_138;
          puVar6 = auStack_1a8;
          FUN_100506304();
          local_90 = local_130;
          lVar3 = local_268;
          lVar24 = local_248;
          puVar19 = local_260;
          local_f8 = pcVar25;
          if (local_260 != (undefined1 *)0x0) {
            do {
              local_278 = lVar23;
              lVar23 = local_250;
              uStack_f0 = 0;
              pcVar20 = pcVar25 + 1;
              uVar13 = (ulong)*pcVar25;
              puVar15 = puVar19 + -1;
              local_f8 = pcVar25;
              if ((long)uVar13 < 0) {
                if ((undefined1 *)0x1 < puVar19) {
                  uVar13 = uVar13 & 0x7f;
                  pcVar20 = pcVar25 + 2;
                  uVar22 = 7;
                  while (uVar13 = ((ulong)(byte)pcVar20[-1] & 0x7f) << (uVar22 & 0x3f) | uVar13,
                        pcVar20[-1] < '\0') {
                    if (puVar15 < (undefined1 *)0x2) goto LAB_100502924;
                    pcVar20 = pcVar20 + 1;
                    puVar15 = puVar15 + -1;
                    bVar1 = 0x38 < uVar22;
                    uVar22 = uVar22 + 7;
                    if (bVar1) goto LAB_100502924;
                  }
                  puVar15 = puVar15 + -1;
                  local_108 = pcVar20;
                  puStack_100 = puVar15;
                  if (uVar13 < 0xffffffff) goto LAB_1005025f4;
                }
LAB_100502924:
                FUN_100506290();
                _swift_allocError(&DAT_1009cdf18,puVar6,0,0);
                *puVar6 = 3;
                goto LAB_10050294c;
              }
LAB_1005025f4:
              uVar2 = (uint)uVar13 & 7;
              local_108 = pcVar20;
              puStack_100 = puVar15;
              if (uVar13 < 8 || 5 < uVar2) goto LAB_100502924;
              local_e0 = uVar13 >> 3;
              if (uVar2 == 4) {
                local_e8 = CONCAT11(4,(undefined1)local_e8);
                goto LAB_100502924;
              }
              local_e8 = CONCAT11((char)uVar2,(undefined1)local_e8);
              if (local_e0 == 2) {
                local_270 = pcVar14;
                FUN_1005004e0(puVar28,local_250,param_5);
                (**(code **)(lVar12 + 0x10))(puVar27,puVar28,lVar4);
                puVar19 = puVar27;
                (**(code **)(local_258 + 0x30))(puVar27,1,lVar23);
                pcVar26 = *(code **)(lVar12 + 8);
                puVar6 = puVar27;
                (*pcVar26)(puVar27,lVar4);
                lVar3 = local_268;
                lVar24 = local_248;
                pcVar14 = local_270;
                if (((int)puVar19 == 1) && ((uVar13 & 7) == 0)) {
                  (*pcVar26)(puVar28,lVar4);
                  goto LAB_100502968;
                }
              }
              else {
                if (local_e0 != 1) {
                  puStack_100 = puVar15 + ((long)pcVar20 - (long)pcVar25);
                  if (SCARRY8((long)puVar15,(long)pcVar20 - (long)pcVar25)) {
                    /* WARNING: Does not return */
                    pcVar14 = (code *)SoftwareBreakpoint(1,0x100502a5c);
                    puStack_100 = puVar15;
                    (*pcVar14)();
                  }
                  local_108 = pcVar25;
                  if ((long)puStack_100 < 1) {
                    FUN_100506290();
                    _swift_allocError(&DAT_1009cdf18,puVar6,0,0);
                    uVar10 = 1;
                  }
                  else {
                    FUN_1004fdea4();
                    if (((puVar6 < (undefined1 *)0xffffffff) && ((undefined1 *)0x7 < puVar6)) &&
                       (uVar2 = (uint)puVar6 & 7, uVar2 < 6)) {
                      local_e8 = CONCAT11((char)uVar2,(undefined1)local_e8);
                      local_e0 = (ulong)puVar6 >> 3;
                      FUN_100504f64();
                      goto LAB_10050256c;
                    }
                    FUN_100506290();
                    _swift_allocError(&DAT_1009cdf18,puVar6,0,0);
                    uVar10 = 3;
                  }
                  *puVar6 = uVar10;
                  _swift_willThrow();
                  (**(code **)(lVar12 + 8))(puVar28,lVar4);
                  pcVar14 = *(code **)(lVar21 + 8);
                  goto LAB_100502974;
                }
                puVar6 = puVar18;
                (**(code **)(lVar9 + 0x20))
                          (puVar18,&local_108,&DAT_1009cdc68,&PTR_PTR_1009cdcb0,param_2);
              }
LAB_10050256c:
              local_f8 = local_108;
              uStack_f0 = 0;
              pcVar25 = local_108;
              puVar19 = puStack_100;
              lVar23 = local_278;
            } while (0 < (long)puStack_100);
            if (puStack_100 != (undefined1 *)0x0) {
              FUN_100506290();
              _swift_allocError(&DAT_1009cdf18,puVar6,0,0);
              *puVar6 = 0;
LAB_10050294c:
              _swift_willThrow();
              (**(code **)(lVar12 + 8))(puVar28,lVar4);
LAB_100502968:
              pcVar14 = *(code **)(lVar21 + 8);
LAB_100502974:
              (*pcVar14)(puVar18,lVar5);
              FUN_100506304(&local_108);
              return;
            }
          }
          uStack_f0 = 0;
          (**(code **)(lVar21 + 0x10))(lVar3,puVar18,lVar5);
          pcVar26 = *(code **)(lVar23 + 0x30);
          lVar7 = lVar3;
          (*pcVar26)(lVar3,1,lVar24);
          local_270 = pcVar14;
          if ((int)lVar7 == 1) {
            (**(code **)(lVar9 + 0x18))(puVar11,param_2);
            lVar23 = lVar3;
            (*pcVar26)(lVar3,1,lVar24);
            if ((int)lVar23 != 1) {
              (**(code **)(lVar21 + 8))(lVar3,lVar5);
            }
          }
          else {
            (**(code **)(lVar23 + 0x20))(puVar11,lVar3,lVar24);
          }
          (**(code **)(lVar12 + 0x10))(lVar16,puVar28,lVar4);
          lVar3 = local_250;
          lVar23 = local_258;
          pcVar14 = *(code **)(local_258 + 0x30);
          lVar7 = lVar16;
          (*pcVar14)(lVar16,1,local_250);
          if ((int)lVar7 == 1) {
            (**(code **)(param_5 + 0x18))(lVar17,lVar3);
            lVar23 = lVar16;
            (*pcVar14)(lVar16,1,lVar3);
            if ((int)lVar23 != 1) {
              (**(code **)(lVar12 + 8))(lVar16,lVar4);
            }
          }
          else {
            (**(code **)(lVar23 + 0x20))(lVar17,lVar16,lVar3);
          }
          (*local_270)(lVar17,0,1,lVar3);
          _swift_getAssociatedConformanceWitness
                    (lVar9,param_2,lVar24,0x100900ffc,&TargetProtocolRequirement_100901004);
          uVar8 = 0;
          __sSDMa(0,lVar24,lVar3,lVar9);
          __sSDyq_Sgxcis(lVar17,puVar11,uVar8);
          (**(code **)(lVar12 + 8))(puVar28,lVar4);
          (**(code **)(lVar21 + 8))(puVar18,lVar5);
          FUN_100506304(&local_108);
          *(undefined1 *)(unaff_x20 + 4) = 1;
          return;
        }
        FUN_100506290();
        _swift_allocError(&DAT_1009cdf18,puVar6,0,0);
        uVar10 = 1;
      }
      else {
        FUN_100506290();
        _swift_allocError(&DAT_1009cdf18,puVar6,0,0);
        uVar10 = 3;
      }
      *puVar6 = uVar10;
      _swift_willThrow();
    }
    (**(code **)(lVar12 + 8))(puVar28,lVar4);
    (**(code **)(lVar21 + 8))(puVar18,lVar5);
  }
  return;
}

