// rea decompile_all
// name: FUN_100557fd4
// address: 0x100557fd4
// body: available
// range: 0x100557fd4-0x100558e3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100558e3c to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100558bcc) */
/* WARNING: Removing unreachable block (ram,0x000100558a90) */
/* WARNING: Removing unreachable block (ram,0x000100558a98) */

void FUN_100557fd4(char *param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  ulong uVar9;
  char *pcVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  char cVar13;
  uint uVar14;
  long lVar15;
  char *pcVar16;
  int iVar17;
  int iVar18;
  ulong *unaff_x20;
  ulong uVar19;
  void *pvVar20;
  ulong uVar21;
  long unaff_x21;
  ulong uVar22;
  char *pcVar23;
  ulong local_2b0;
  char *local_290;
  undefined1 local_286;
  undefined1 local_285;
  undefined1 local_284;
  undefined1 local_283;
  undefined1 local_282;
  undefined1 local_281;
  undefined1 local_280;
  undefined1 local_27f;
  undefined1 local_27e;
  undefined1 local_27d;
  undefined1 local_27c;
  undefined1 local_27b;
  undefined1 local_27a;
  undefined1 local_279;
  undefined1 auStack_278 [40];
  undefined1 auStack_250 [48];
  undefined1 auStack_220 [56];
  undefined8 local_1e8;
  undefined1 local_1e0;
  undefined8 local_1d8;
  undefined1 *local_1b0;
  ulong uStack_1a8;
  undefined1 *local_1a0;
  undefined8 uStack_198;
  undefined2 local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined1 local_150;
  undefined8 local_148;
  undefined1 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined6 local_110;
  undefined2 uStack_10a;
  undefined6 local_108;
  undefined1 local_102;
  undefined1 uStack_101;
  undefined1 *local_100;
  undefined8 uStack_f8;
  undefined2 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined1 local_b0;
  undefined8 local_a8;
  undefined1 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_1009954a0;
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)param_1;
  param_1[0x18] = '\0';
  param_1[0x19] = '\0';
  param_1[0x1a] = '\0';
  param_1[0x1b] = '\0';
  param_1[0x1c] = '\0';
  param_1[0x1d] = '\0';
  param_1[0x1e] = '\0';
  param_1[0x1f] = '\0';
  pcVar10 = PTR___swiftEmptyArrayStorage_100995ea0;
  if (0 < *(long *)(param_1 + 8)) {
    pcVar23 = param_1;
    do {
      FUN_1004fdea4();
      if (unaff_x21 != 0) break;
      if (((char *)0xfffffffe < pcVar23) || (pcVar23 < (char *)0x8)) {
LAB_100558d74:
        FUN_100506290();
        _swift_allocError(&DAT_1009cdf18,pcVar23,0,0);
        cVar13 = '\x03';
LAB_100558d98:
        *pcVar23 = cVar13;
        _swift_willThrow();
        break;
      }
      uVar19 = (ulong)pcVar23 & 7;
      uVar2 = (uint)pcVar23 & 7;
      if (5 < uVar2) goto LAB_100558d74;
      pcVar23 = (char *)((ulong)pcVar23 >> 3);
      if (uVar19 != 0 && -1 < (int)uVar2) {
        if (2 < uVar2) {
          if (uVar2 == 3) {
            param_1[0x21] = '\x03';
            *(char **)(param_1 + 0x28) = pcVar23;
            _swift_bridgeObjectRetain(unaff_x20[1]);
            FUN_1004fa13c();
            FUN_100556288(pcVar23);
            FUN_1004f9e80(" {\n",3);
            if (DAT_100aa26b8 != -1) {
              _swift_once(&DAT_100aa26b8,FUN_100556110);
            }
            _swift_bridgeObjectRetain(DAT_100aabac0);
            FUN_1004fa13c();
            local_290 = pcVar10;
            _swift_isUniquelyReferenced_nonNull_native();
            if (((ulong)local_290 & 1) == 0) {
              local_290 = (char *)0x0;
              FUN_100507a2c(0,*(long *)(pcVar10 + 0x10) + 1,1,pcVar10);
              pcVar10 = local_290;
            }
            uVar19 = *(ulong *)(pcVar10 + 0x10);
            if (*(ulong *)(pcVar10 + 0x18) >> 1 <= uVar19) {
              local_290 = (char *)(ulong)(1 < *(ulong *)(pcVar10 + 0x18));
              FUN_100507a2c(local_290,uVar19 + 1,1,pcVar10);
              pcVar10 = local_290;
            }
            *(ulong *)(pcVar10 + 0x10) = uVar19 + 1;
            *(char **)(pcVar10 + (uVar19 + 4) * 8) = pcVar23;
          }
          else {
            if (uVar2 != 4) {
              param_1[0x21] = '\x05';
              *(char **)(param_1 + 0x28) = pcVar23;
              _swift_bridgeObjectRetain(unaff_x20[1]);
              FUN_1004fa13c();
              FUN_100556288(pcVar23);
              pcVar23 = ": ";
              FUN_1004f9e80(": ",2);
              if (3 < *(long *)(param_1 + 8)) {
                uVar19 = (ulong)**(uint **)param_1;
                *(uint **)param_1 = *(uint **)param_1 + 1;
                *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + -4;
                param_1[0x20] = '\x01';
                uVar11 = 8;
                goto LAB_1005583b0;
              }
              goto LAB_100558de8;
            }
            param_1[0x21] = '\x04';
            *(char **)(param_1 + 0x28) = pcVar23;
            if (*(long *)(pcVar10 + 0x10) != 0) {
              pcVar23 = pcVar10;
              _swift_isUniquelyReferenced_nonNull_native();
              if (((ulong)pcVar23 & 1) == 0) {
                FUN_1004fd254();
                lVar15 = *(long *)(pcVar10 + 0x10);
              }
              else {
                lVar15 = *(long *)(pcVar10 + 0x10);
              }
              if (lVar15 == 0) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x100558e18);
                (*pcVar5)();
              }
              *(long *)(pcVar10 + 0x10) = lVar15 + -1;
            }
            uVar19 = unaff_x20[1];
            uVar22 = *(ulong *)(uVar19 + 0x10);
            if (uVar22 < 2) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x100558e1c);
              (*pcVar5)();
            }
            uVar9 = uVar19;
            _swift_isUniquelyReferenced_nonNull_native();
            if (((int)uVar9 == 0) || (*(ulong *)(uVar19 + 0x18) >> 1 < uVar22 - 2)) {
              FUN_100506f84();
              uVar19 = uVar9;
            }
            _memmove((void *)(uVar19 + uVar22 + 0x1e),(void *)(uVar19 + uVar22 + 0x20),
                     *(long *)(uVar19 + 0x10) - uVar22);
            *(long *)(uVar19 + 0x10) = *(long *)(uVar19 + 0x10) + -2;
            unaff_x20[1] = uVar19;
            _swift_bridgeObjectRetain(uVar19);
            FUN_1004fa13c();
            local_290 = "}\n";
            FUN_1004f9e80("}\n",2);
          }
          goto LAB_1005580b0;
        }
        if (uVar2 != 1) {
          param_1[0x21] = '\x02';
          *(char **)(param_1 + 0x28) = pcVar23;
          _swift_bridgeObjectRetain(unaff_x20[1]);
          FUN_1004fa13c();
          FUN_100556288();
          FUN_1004fdea4();
          if ((char *)0x7ffffffe < pcVar23) goto LAB_100558d74;
          pcVar16 = *(char **)(param_1 + 8);
          if ((long)pcVar16 < 0) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x100558e14);
            (*pcVar5)();
          }
          if (pcVar16 < pcVar23) goto LAB_100558de8;
          pvVar20 = *(void **)param_1;
          *(char **)param_1 = (char *)((long)pvVar20 + (long)pcVar23);
          *(long *)(param_1 + 8) = (long)pcVar16 - (long)pcVar23;
          if (pcVar23 == (char *)0x0) {
            local_290 = (char *)0x0;
            param_1[0x20] = '\x01';
            uVar19 = 0xc000000000000000;
          }
          else {
            if (pcVar23 < (char *)0xf) {
              local_108 = 0;
              local_110 = 0;
              uStack_10a = 0;
              local_102 = SUB81(pcVar23,0);
              _memcpy(&local_110,pvVar20,(size_t)pcVar23);
              local_290 = (char *)CONCAT26(uStack_10a,local_110);
              local_2b0 = local_2b0 & 0xf00000000000000 | (ulong)CONCAT16(local_102,local_108);
              uVar19 = local_2b0;
            }
            else {
              uVar11 = 0;
              __s10Foundation13__DataStorageCMa();
              _swift_allocObject();
              __s10Foundation13__DataStorageC5bytes6lengthACSVSg_Sitcfc(pvVar20,pcVar23,uVar11);
              local_290 = (char *)((long)pcVar23 << 0x20);
              uVar19 = (ulong)pvVar20 | 0x4000000000000000;
            }
            param_1[0x20] = '\x01';
            uVar2 = (uint)(uVar19 >> 0x20);
            uVar14 = uVar2 >> 0x1e;
            iVar18 = (int)local_290;
            iVar17 = (int)((ulong)local_290 >> 0x20);
            if (uVar2 >> 0x1e < 2) {
              if (uVar14 == 0) {
                if ((uVar19 >> 0x30 & 0xff) != 0) {
LAB_1005584b4:
                  if (0 < param_2) {
                    if (uVar14 == 2) {
                      lVar15 = *(long *)(local_290 + 0x10);
                      lVar1 = *(long *)(local_290 + 0x18);
                      _swift_retain(local_290);
                      puVar6 = (undefined1 *)(uVar19 & 0x3fffffffffffffff);
                      _swift_retain();
                      __s10Foundation13__DataStorageC6_bytesSvSgvg();
                      puVar8 = puVar6;
                      if (puVar6 != (undefined1 *)0x0) {
                        __s10Foundation13__DataStorageC7_offsetSivg();
                        if (SBORROW8(lVar15,(long)puVar8)) {
                    /* WARNING: Does not return */
                          pcVar5 = (code *)SoftwareBreakpoint(1,0x100558e30);
                          (*pcVar5)();
                        }
                        puVar6 = puVar6 + (lVar15 - (long)puVar8);
                      }
                      puVar7 = (undefined1 *)(lVar1 - lVar15);
                      if (SBORROW8(lVar1,lVar15)) {
                    /* WARNING: Does not return */
                        pcVar5 = (code *)SoftwareBreakpoint(1,0x100558e2c);
                        (*pcVar5)();
                      }
                      __s10Foundation13__DataStorageC7_lengthSivg();
                      if ((long)puVar7 <= (long)puVar8) {
                        puVar8 = puVar7;
                      }
                      if ((puVar6 != (undefined1 *)0x0) && (0 < (long)puVar8)) {
                        FUN_1005062d0(param_1,&local_1b0);
                        uVar3 = local_140;
                        uVar11 = local_148;
                        FUN_10007f314(&uStack_180,auStack_250,&DAT_100aaa0e8,&DAT_1008358c0);
                        local_f0 = 1;
                        uStack_e0 = 0;
                        local_e8 = 0;
                        uStack_d0 = 0;
                        local_d8 = 0;
                        uStack_c0 = 0;
                        local_c8 = 0;
                        local_b8 = 0;
                        local_b0 = 1;
                        uStack_88 = 0xf000000000000000;
                        local_90 = 0;
                        uStack_78 = 0xf000000000000000;
                        uStack_80 = 0;
                        local_110 = SUB86(puVar6,0);
                        uStack_10a = (undefined2)((ulong)puVar6 >> 0x30);
                        local_108 = SUB86(puVar8,0);
                        local_102 = (undefined1)((ulong)puVar8 >> 0x30);
                        uStack_101 = (undefined1)((ulong)puVar8 >> 0x38);
                        uStack_f8 = 0;
                        puVar12 = &uStack_e0;
                        local_100 = puVar6;
                        FUN_100128b30(auStack_250,puVar12,&DAT_100aaa0e8,&DAT_1008358c0);
                        uVar4 = local_138;
                        local_a8 = uVar11;
                        local_a0 = uVar3;
                        FUN_100506304(&local_1b0);
                        local_98 = uVar4;
                        do {
                          FUN_1004fd7d4();
                        } while (((ulong)puVar12 & 1) == 0);
                        uVar22 = *(long *)(local_290 + 0x18) - *(long *)(local_290 + 0x10);
                        if (SBORROW8(*(long *)(local_290 + 0x18),*(long *)(local_290 + 0x10))) {
                    /* WARNING: Does not return */
                          pcVar5 = (code *)SoftwareBreakpoint(1,0x100558e3c);
                          (*pcVar5)();
                        }
LAB_100558754:
                        FUN_1005062d0(param_1,auStack_250);
                        uVar3 = local_1e0;
                        uVar11 = local_1e8;
                        FUN_10007f314(auStack_220,auStack_278,&DAT_100aaa0e8,&DAT_1008358c0);
                        local_190 = 1;
                        uStack_180 = 0;
                        local_188 = 0;
                        uStack_170 = 0;
                        local_178 = 0;
                        uStack_160 = 0;
                        local_168 = 0;
                        local_158 = 0;
                        local_150 = 1;
                        uStack_128 = 0xf000000000000000;
                        local_130 = 0;
                        uStack_118 = 0xf000000000000000;
                        uStack_120 = 0;
                        uStack_198 = 0;
                        local_1b0 = puVar6;
                        uStack_1a8 = uVar22;
                        local_1a0 = puVar6;
                        FUN_100128b30(auStack_278,&uStack_180,&DAT_100aaa0e8,&DAT_1008358c0);
                        uVar4 = local_1d8;
                        local_148 = uVar11;
                        local_140 = uVar3;
                        FUN_100506304(auStack_250);
                        local_138 = uVar4;
                        FUN_1004f9e80(" {\n",3);
                        if (DAT_100aa26b8 != -1) {
                          _swift_once(&DAT_100aa26b8,FUN_100556110);
                        }
                        _swift_bridgeObjectRetain(DAT_100aabac0);
                        FUN_1004fa13c();
                        FUN_100557fd4(&local_1b0,param_2 + -1);
LAB_100558a88:
                        FUN_1005564b4();
                        FUN_100506304(&local_1b0);
                        FUN_100506304(&local_110);
                        FUN_100006cdc(local_290,uVar19);
                        FUN_100006cdc(local_290,uVar19);
                        goto LAB_1005580b0;
                      }
                    }
                    else if (uVar14 == 1) {
                      lVar15 = (long)iVar18;
                      puVar8 = (undefined1 *)(((long)local_290 >> 0x20) - lVar15);
                      if ((long)local_290 >> 0x20 < lVar15) {
                    /* WARNING: Does not return */
                        pcVar5 = (code *)SoftwareBreakpoint(1,0x100558e28);
                        (*pcVar5)();
                      }
                      puVar6 = (undefined1 *)(uVar19 & 0x3fffffffffffffff);
                      _swift_retain();
                      __s10Foundation13__DataStorageC6_bytesSvSgvg();
                      puVar7 = puVar6;
                      if (puVar6 != (undefined1 *)0x0) {
                        __s10Foundation13__DataStorageC7_offsetSivg();
                        if (SBORROW8(lVar15,(long)puVar7)) {
                    /* WARNING: Does not return */
                          pcVar5 = (code *)SoftwareBreakpoint(1,0x100558e34);
                          (*pcVar5)();
                        }
                        puVar6 = puVar6 + (lVar15 - (long)puVar7);
                      }
                      __s10Foundation13__DataStorageC7_lengthSivg();
                      if ((long)puVar8 <= (long)puVar7) {
                        puVar7 = puVar8;
                      }
                      if ((puVar6 != (undefined1 *)0x0) && (0 < (long)puVar7)) {
                        FUN_1005062d0(param_1,&local_1b0);
                        uVar3 = local_140;
                        uVar11 = local_148;
                        FUN_10007f314(&uStack_180,auStack_250,&DAT_100aaa0e8,&DAT_1008358c0);
                        local_f0 = 1;
                        uStack_e0 = 0;
                        local_e8 = 0;
                        uStack_d0 = 0;
                        local_d8 = 0;
                        uStack_c0 = 0;
                        local_c8 = 0;
                        local_b8 = 0;
                        local_b0 = 1;
                        uStack_88 = 0xf000000000000000;
                        local_90 = 0;
                        uStack_78 = 0xf000000000000000;
                        uStack_80 = 0;
                        local_110 = SUB86(puVar6,0);
                        uStack_10a = (undefined2)((ulong)puVar6 >> 0x30);
                        local_108 = SUB86(puVar7,0);
                        local_102 = (undefined1)((ulong)puVar7 >> 0x30);
                        uStack_101 = (undefined1)((ulong)puVar7 >> 0x38);
                        uStack_f8 = 0;
                        puVar12 = &uStack_e0;
                        local_100 = puVar6;
                        FUN_100128b30(auStack_250,puVar12,&DAT_100aaa0e8,&DAT_1008358c0);
                        uVar4 = local_138;
                        local_a8 = uVar11;
                        local_a0 = uVar3;
                        FUN_100506304(&local_1b0);
                        local_98 = uVar4;
                        do {
                          FUN_1004fd7d4();
                        } while (((ulong)puVar12 & 1) == 0);
                        if (SBORROW4(iVar17,iVar18)) {
                    /* WARNING: Does not return */
                          pcVar5 = (code *)SoftwareBreakpoint(1,0x100558e38);
                          (*pcVar5)();
                        }
                        uVar22 = (ulong)(iVar17 - iVar18);
                        goto LAB_100558754;
                      }
                    }
                    else {
                      local_286 = SUB81(local_290,0);
                      local_285 = (undefined1)((ulong)local_290 >> 8);
                      local_284 = (undefined1)((ulong)local_290 >> 0x10);
                      local_283 = (undefined1)((ulong)local_290 >> 0x18);
                      local_282 = (undefined1)((ulong)local_290 >> 0x20);
                      local_281 = (undefined1)((ulong)local_290 >> 0x28);
                      local_280 = (undefined1)((ulong)local_290 >> 0x30);
                      local_27f = (undefined1)((ulong)local_290 >> 0x38);
                      local_27e = (undefined1)uVar19;
                      local_27d = (undefined1)(uVar19 >> 8);
                      local_27c = (undefined1)(uVar19 >> 0x10);
                      local_27b = (undefined1)(uVar19 >> 0x18);
                      local_27a = (undefined1)(uVar19 >> 0x20);
                      uVar22 = uVar19 >> 0x30 & 0xff;
                      local_279 = (undefined1)(uVar19 >> 0x28);
                      if (uVar22 != 0) {
                        FUN_1005062d0(param_1,&local_1b0);
                        uVar3 = local_140;
                        uVar11 = local_148;
                        FUN_10007f314(&uStack_180,auStack_250,&DAT_100aaa0e8,&DAT_1008358c0);
                        local_f0 = 1;
                        uStack_e0 = 0;
                        local_e8 = 0;
                        uStack_d0 = 0;
                        local_d8 = 0;
                        uStack_c0 = 0;
                        local_c8 = 0;
                        local_b8 = 0;
                        local_b0 = 1;
                        uStack_88 = 0xf000000000000000;
                        local_90 = 0;
                        uStack_78 = 0xf000000000000000;
                        uStack_80 = 0;
                        local_100 = &local_286;
                        local_110 = SUB86(local_100,0);
                        uStack_10a = (undefined2)((ulong)local_100 >> 0x30);
                        local_108 = (undefined6)uVar22;
                        local_102 = 0;
                        uStack_101 = 0;
                        uStack_f8 = 0;
                        puVar12 = &uStack_e0;
                        FUN_100128b30(auStack_250,puVar12,&DAT_100aaa0e8,&DAT_1008358c0);
                        uVar4 = local_138;
                        local_a8 = uVar11;
                        local_a0 = uVar3;
                        FUN_100506304(&local_1b0);
                        local_98 = uVar4;
                        do {
                          FUN_1004fd7d4();
                        } while (((ulong)puVar12 & 1) == 0);
                        FUN_1005062d0(param_1,auStack_250);
                        uVar3 = local_1e0;
                        uVar11 = local_1e8;
                        FUN_10007f314(auStack_220,auStack_278,&DAT_100aaa0e8,&DAT_1008358c0);
                        local_190 = 1;
                        uStack_180 = 0;
                        local_188 = 0;
                        uStack_170 = 0;
                        local_178 = 0;
                        uStack_160 = 0;
                        local_168 = 0;
                        local_158 = 0;
                        local_150 = 1;
                        uStack_128 = 0xf000000000000000;
                        local_130 = 0;
                        uStack_118 = 0xf000000000000000;
                        uStack_120 = 0;
                        local_1b0 = &local_286;
                        uStack_198 = 0;
                        uStack_1a8 = uVar22;
                        local_1a0 = local_1b0;
                        FUN_100128b30(auStack_278,&uStack_180,&DAT_100aaa0e8,&DAT_1008358c0);
                        uVar4 = local_1d8;
                        local_148 = uVar11;
                        local_140 = uVar3;
                        FUN_100506304(auStack_250);
                        local_138 = uVar4;
                        FUN_1004f9e80(" {\n",3);
                        if (DAT_100aa26b8 != -1) {
                          _swift_once(&DAT_100aa26b8,FUN_100556110);
                        }
                        _swift_bridgeObjectRetain(DAT_100aabac0);
                        FUN_1004fa13c();
                        FUN_100557fd4(&local_1b0,param_2 + -1);
                        goto LAB_100558a88;
                      }
                    }
                    FUN_100006cdc(local_290,uVar19);
                  }
                }
              }
              else {
                if (SBORROW4(iVar17,iVar18)) {
                    /* WARNING: Does not return */
                  pcVar5 = (code *)SoftwareBreakpoint(1,0x100558e24);
                  (*pcVar5)();
                }
                if (0 < iVar17 - iVar18) goto LAB_1005584b4;
              }
            }
            else if (uVar14 == 2) {
              if (SBORROW8(*(long *)(local_290 + 0x18),*(long *)(local_290 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x100558e20);
                (*pcVar5)();
              }
              if (0 < *(long *)(local_290 + 0x18) - *(long *)(local_290 + 0x10)) goto LAB_1005584b4;
            }
          }
          FUN_1004f9e80(": ",2);
          uVar21 = *unaff_x20;
          uVar22 = uVar21;
          _swift_isUniquelyReferenced_nonNull_native();
          uVar9 = uVar21;
          if ((uVar22 & 1) == 0) {
            uVar9 = 0;
            FUN_100506f84(0,*(long *)(uVar21 + 0x10) + 1,1,uVar21);
          }
          uVar22 = *(ulong *)(uVar9 + 0x10);
          uVar21 = uVar9;
          if (*(ulong *)(uVar9 + 0x18) >> 1 <= uVar22) {
            uVar21 = (ulong)(1 < *(ulong *)(uVar9 + 0x18));
            FUN_100506f84(uVar21,uVar22 + 1,1,uVar9);
          }
          *(ulong *)(uVar21 + 0x10) = uVar22 + 1;
          *(undefined1 *)(uVar21 + uVar22 + 0x20) = 0x22;
          *unaff_x20 = uVar21;
          FUN_10055ce08(local_290,uVar19);
          uVar21 = *unaff_x20;
          uVar22 = uVar21;
          _swift_isUniquelyReferenced_nonNull_native();
          uVar9 = uVar21;
          if ((uVar22 & 1) == 0) {
            uVar9 = 0;
            FUN_100506f84(0,*(long *)(uVar21 + 0x10) + 1,1,uVar21);
          }
          uVar22 = *(ulong *)(uVar9 + 0x10);
          lVar15 = uVar22 + 1;
          uVar21 = uVar9;
          if (*(ulong *)(uVar9 + 0x18) >> 1 <= uVar22) {
            uVar21 = (ulong)(1 < *(ulong *)(uVar9 + 0x18));
            FUN_100506f84(uVar21,lVar15,1,uVar9);
          }
          *(long *)(uVar21 + 0x10) = lVar15;
          *(undefined1 *)(uVar21 + uVar22 + 0x20) = 0x22;
          *unaff_x20 = uVar21;
          lVar1 = uVar22 + 2;
          uVar22 = uVar21;
          if ((long)(*(ulong *)(uVar21 + 0x18) >> 1) < lVar1) {
            uVar22 = (ulong)(1 < *(ulong *)(uVar21 + 0x18));
            FUN_100506f84(uVar22,lVar1,1,uVar21);
          }
          *(long *)(uVar22 + 0x10) = lVar1;
          *(undefined1 *)(uVar22 + lVar15 + 0x20) = 10;
          FUN_100006cdc(local_290,uVar19);
          *unaff_x20 = uVar22;
          goto LAB_1005580b0;
        }
        param_1[0x21] = '\x01';
        *(char **)(param_1 + 0x28) = pcVar23;
        _swift_bridgeObjectRetain(unaff_x20[1]);
        FUN_1004fa13c();
        FUN_100556288(pcVar23);
        pcVar23 = ": ";
        FUN_1004f9e80(": ",2);
        if (7 < *(long *)(param_1 + 8)) {
          uVar19 = **(ulong **)param_1;
          *(ulong **)param_1 = *(ulong **)param_1 + 1;
          *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + -8;
          param_1[0x20] = '\x01';
          uVar11 = 0x10;
LAB_1005583b0:
          FUN_1005566e8(uVar19,uVar11);
          goto LAB_1005583b8;
        }
LAB_100558de8:
        FUN_100506290();
        _swift_allocError(&DAT_1009cdf18,pcVar23,0,0);
        cVar13 = '\x01';
        goto LAB_100558d98;
      }
      param_1[0x21] = '\0';
      *(char **)(param_1 + 0x28) = pcVar23;
      _swift_bridgeObjectRetain(unaff_x20[1]);
      FUN_1004fa13c();
      FUN_100556288(pcVar23);
      FUN_1004f9e80(": ",2);
      FUN_1004fdea4();
      param_1[0x20] = '\x01';
      FUN_100556288();
LAB_1005583b8:
      pcVar23 = (char *)*unaff_x20;
      local_290 = pcVar23;
      _swift_isUniquelyReferenced_nonNull_native();
      if (((ulong)local_290 & 1) == 0) {
        local_290 = (char *)0x0;
        FUN_100506f84(0,*(long *)(pcVar23 + 0x10) + 1,1,pcVar23);
        pcVar23 = local_290;
      }
      uVar19 = *(ulong *)(pcVar23 + 0x10);
      if (*(ulong *)(pcVar23 + 0x18) >> 1 <= uVar19) {
        local_290 = (char *)(ulong)(1 < *(ulong *)(pcVar23 + 0x18));
        FUN_100506f84(local_290,uVar19 + 1,1,pcVar23);
        pcVar23 = local_290;
      }
      *(ulong *)(pcVar23 + 0x10) = uVar19 + 1;
      pcVar23[uVar19 + 0x20] = '\n';
      *unaff_x20 = (ulong)pcVar23;
LAB_1005580b0:
      *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)param_1;
      param_1[0x18] = '\0';
      param_1[0x19] = '\0';
      param_1[0x1a] = '\0';
      param_1[0x1b] = '\0';
      param_1[0x1c] = '\0';
      param_1[0x1d] = '\0';
      param_1[0x1e] = '\0';
      param_1[0x1f] = '\0';
      pcVar23 = local_290;
    } while (0 < *(long *)(param_1 + 8));
  }
  _swift_bridgeObjectRelease(pcVar10);
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

