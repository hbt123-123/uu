// rea decompile_all
// name: FUN_10040a67c
// address: 0x10040a67c
// body: available
// range: 0x10040a67c-0x10040a923 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_10040a67c(ulong *param_1,long param_2,undefined *param_3,undefined *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  long lVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  long extraout_x8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  undefined *local_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  undefined1 auStack_a8 [72];
  
  lVar6 = 0;
  __s10Foundation4DateVMa();
  local_b0 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_b0 + 0x40));
  local_b8 = (long)&local_d0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar7 = PTR___swiftEmptyDictionarySingleton_100995ea8;
  if (param_3 != (undefined *)0x0) {
    if (*(undefined **)(param_4 + 0x10) == param_3) {
      _swift_retain(param_4);
      puVar7 = param_4;
    }
    else {
      local_c8 = lVar6;
      FUN_100004bb4(&DAT_100a8ba88,&DAT_100824c50);
      puVar7 = param_3;
      __ss18_DictionaryStorageC8allocate8capacityAByxq_GSi_tFZ();
      if (param_2 < 1) {
        uVar14 = 0;
      }
      else {
        uVar14 = *param_1;
      }
      lVar13 = local_c8;
      lVar6 = 0;
      local_d0 = param_4;
      do {
        if (uVar14 == 0) {
          do {
            lVar15 = lVar6 + 1;
            if (SCARRY8(lVar6,1)) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x10040a91c);
              (*pcVar4)();
            }
            if (param_2 <= lVar15) {
              return puVar7;
            }
            uVar14 = param_1[lVar15];
            lVar6 = lVar6 + 1;
          } while (uVar14 == 0);
          uVar9 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
          uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
          uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
          uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
          uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
          uVar14 = uVar14 - 1 & uVar14;
        }
        else {
          uVar9 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
          uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
          uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
          uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
          uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
          uVar14 = uVar14 - 1 & uVar14;
          lVar15 = lVar6;
        }
        uVar9 = LZCOUNT(uVar9) | lVar15 << 6;
        puVar1 = (undefined8 *)(*(long *)(local_d0 + 0x30) + uVar9 * 0x10);
        local_c0 = *(long *)(local_b0 + 0x48);
        uVar2 = *puVar1;
        uVar3 = puVar1[1];
        (**(code **)(local_b0 + 0x10))
                  (local_b8,*(long *)(local_d0 + 0x38) + local_c0 * uVar9,lVar13);
        __ss6HasherV5_seedABSi_tcfC(auStack_a8,*(undefined8 *)(puVar7 + 0x28));
        _swift_bridgeObjectRetain(uVar3);
        puVar8 = auStack_a8;
        __sSS4hash4intoys6HasherVz_tF(puVar8,uVar2,uVar3);
        __ss6HasherV9_finalizeSiyF();
        lVar13 = local_c8;
        uVar12 = -1L << ((ulong)(byte)puVar7[0x20] & 0x3f);
        uVar11 = (ulong)puVar8 & (uVar12 ^ 0xffffffffffffffff);
        uVar10 = uVar11 >> 6;
        uVar9 = -1L << (uVar11 & 0x3f) &
                (*(ulong *)(puVar7 + uVar10 * 8 + 0x40) ^ 0xffffffffffffffff);
        if (uVar9 == 0) {
          bVar5 = false;
          uVar9 = 0x3f - uVar12 >> 6;
          do {
            uVar11 = uVar10 + 1;
            if ((uVar11 == uVar9) && (bVar5)) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x10040a920);
              (*pcVar4)();
            }
            uVar10 = 0;
            if (uVar11 != uVar9) {
              uVar10 = uVar11;
            }
            bVar5 = (bool)(uVar11 == uVar9 | bVar5);
          } while (*(ulong *)(puVar7 + uVar10 * 8 + 0x40) == 0xffffffffffffffff);
          uVar9 = ~*(ulong *)(puVar7 + uVar10 * 8 + 0x40);
          uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
          uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
          uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
          uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
          uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) + uVar10 * 0x40;
        }
        else {
          uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
          uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
          uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
          uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
          uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar11 & 0x7fffffffffffffc0;
        }
        uVar10 = uVar9 >> 3 & 0x1ffffffffffffff8;
        *(ulong *)(puVar7 + uVar10 + 0x40) =
             1L << (uVar9 & 0x3f) | *(ulong *)(puVar7 + uVar10 + 0x40);
        puVar1 = (undefined8 *)(*(long *)(puVar7 + 0x30) + uVar9 * 0x10);
        *puVar1 = uVar2;
        puVar1[1] = uVar3;
        (**(code **)(local_b0 + 0x20))
                  (*(long *)(puVar7 + 0x38) + uVar9 * local_c0,local_b8,local_c8);
        *(long *)(puVar7 + 0x10) = *(long *)(puVar7 + 0x10) + 1;
        bVar5 = SBORROW8((long)param_3,1);
        param_3 = param_3 + -1;
        if (bVar5) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10040a924);
          (*pcVar4)();
        }
        lVar6 = lVar15;
      } while (param_3 != (undefined *)0x0);
    }
  }
  return puVar7;
}

