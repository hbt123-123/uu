// rea decompile_all
// name: FUN_10012a628
// address: 0x10012a628
// body: available
// range: 0x10012a628-0x10012a88b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_10012a628(ulong *param_1,long param_2,undefined *param_3,undefined *param_4)

{
  undefined4 uVar1;
  code *pcVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  ulong uVar6;
  long extraout_x8;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined1 auStack_80 [8];
  undefined *local_78;
  undefined1 *local_70;
  long local_68;
  
  lVar4 = 0;
  __s10Foundation4DateVMa();
  lVar11 = *(long *)(lVar4 + -8);
  local_68 = lVar4;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar11 + 0x40));
  local_70 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar5 = PTR___swiftEmptyDictionarySingleton_100995ea8;
  if (param_3 != (undefined *)0x0) {
    if (*(undefined **)(param_4 + 0x10) == param_3) {
      _swift_retain(param_4);
      puVar5 = param_4;
    }
    else {
      FUN_100004bb4(&DAT_100a762a0,&DAT_10080aa90);
      puVar5 = param_3;
      __ss18_DictionaryStorageC8allocate8capacityAByxq_GSi_tFZ();
      if (param_2 < 1) {
        uVar10 = 0;
      }
      else {
        uVar10 = *param_1;
      }
      lVar4 = 0;
      local_78 = param_4;
      do {
        if (uVar10 == 0) {
          do {
            lVar12 = lVar4 + 1;
            if (SCARRY8(lVar4,1)) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x10012a884);
              (*pcVar2)();
            }
            if (param_2 <= lVar12) {
              return puVar5;
            }
            uVar10 = param_1[lVar12];
            lVar4 = lVar4 + 1;
          } while (uVar10 == 0);
          uVar7 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
          uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
          uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
          uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
          uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
          uVar10 = uVar10 - 1 & uVar10;
        }
        else {
          uVar7 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
          uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
          uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
          uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
          uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
          uVar10 = uVar10 - 1 & uVar10;
          lVar12 = lVar4;
        }
        uVar7 = LZCOUNT(uVar7) | lVar12 << 6;
        lVar4 = *(long *)(lVar11 + 0x48);
        uVar1 = *(undefined4 *)(*(long *)(local_78 + 0x30) + uVar7 * 4);
        (**(code **)(lVar11 + 0x10))(local_70,*(long *)(local_78 + 0x38) + lVar4 * uVar7,local_68);
        uVar6 = *(ulong *)(puVar5 + 0x28);
        __ss6HasherV5_hash4seed5bytes5countS2i_s6UInt64VSitFZ(uVar6,uVar1,4);
        uVar9 = -1L << ((ulong)(byte)puVar5[0x20] & 0x3f);
        uVar6 = uVar6 & (uVar9 ^ 0xffffffffffffffff);
        uVar8 = uVar6 >> 6;
        uVar7 = -1L << (uVar6 & 0x3f) & (*(ulong *)(puVar5 + uVar8 * 8 + 0x40) ^ 0xffffffffffffffff)
        ;
        if (uVar7 == 0) {
          bVar3 = false;
          uVar7 = 0x3f - uVar9 >> 6;
          do {
            uVar6 = uVar8 + 1;
            if ((uVar6 == uVar7) && (bVar3)) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x10012a888);
              (*pcVar2)();
            }
            uVar8 = 0;
            if (uVar6 != uVar7) {
              uVar8 = uVar6;
            }
            bVar3 = (bool)(uVar6 == uVar7 | bVar3);
          } while (*(ulong *)(puVar5 + uVar8 * 8 + 0x40) == 0xffffffffffffffff);
          uVar7 = ~*(ulong *)(puVar5 + uVar8 * 8 + 0x40);
          uVar7 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
          uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
          uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
          uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
          uVar7 = LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) + uVar8 * 0x40;
        }
        else {
          uVar7 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
          uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
          uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
          uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
          uVar7 = LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) | uVar6 & 0x7fffffffffffffc0;
        }
        uVar8 = uVar7 >> 3 & 0x1ffffffffffffff8;
        *(ulong *)(puVar5 + uVar8 + 0x40) = 1L << (uVar7 & 0x3f) | *(ulong *)(puVar5 + uVar8 + 0x40)
        ;
        *(undefined4 *)(*(long *)(puVar5 + 0x30) + uVar7 * 4) = uVar1;
        (**(code **)(lVar11 + 0x20))(*(long *)(puVar5 + 0x38) + uVar7 * lVar4,local_70,local_68);
        *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
        bVar3 = SBORROW8((long)param_3,1);
        param_3 = param_3 + -1;
        if (bVar3) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10012a88c);
          (*pcVar2)();
        }
        lVar4 = lVar12;
      } while (param_3 != (undefined *)0x0);
    }
  }
  return puVar5;
}

