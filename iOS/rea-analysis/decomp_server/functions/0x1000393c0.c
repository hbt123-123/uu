// rea decompile_all
// name: FUN_1000393c0
// address: 0x1000393c0
// body: available
// range: 0x1000393c0-0x1000395ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_1000393c0(ulong *param_1,long param_2,undefined *param_3,undefined *param_4)

{
  undefined4 uVar1;
  code *pcVar2;
  bool bVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  
  puVar4 = PTR___swiftEmptySetSingleton_100995eb0;
  if (param_3 != (undefined *)0x0) {
    if (*(undefined **)(param_4 + 0x10) == param_3) {
      return param_4;
    }
    FUN_100004bb4(&DAT_100a75a60,&DAT_100809b10);
    puVar4 = param_3;
    __ss11_SetStorageC8allocate8capacityAByxGSi_tFZ();
    if (param_2 < 1) {
      uVar11 = 0;
    }
    else {
      uVar11 = *param_1;
    }
    lVar7 = 0;
    do {
      if (uVar11 == 0) {
        do {
          lVar10 = lVar7 + 1;
          if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1000395a4);
            (*pcVar2)();
          }
          if (param_2 <= lVar10) goto LAB_100039438;
          uVar11 = param_1[lVar10];
          lVar7 = lVar7 + 1;
        } while (uVar11 == 0);
        uVar6 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
        uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
        uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
        uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
        uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
        uVar11 = uVar11 - 1 & uVar11;
      }
      else {
        uVar6 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
        uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
        uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
        uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
        uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
        uVar11 = uVar11 - 1 & uVar11;
        lVar10 = lVar7;
      }
      uVar1 = *(undefined4 *)(*(long *)(param_4 + 0x30) + (LZCOUNT(uVar6) | lVar10 << 6) * 4);
      uVar5 = *(ulong *)(puVar4 + 0x28);
      __ss6HasherV5_hash4seed5bytes5countS2i_s6UInt64VSitFZ(uVar5,uVar1,4);
      uVar9 = -1L << ((ulong)(byte)puVar4[0x20] & 0x3f);
      uVar5 = uVar5 & (uVar9 ^ 0xffffffffffffffff);
      uVar8 = uVar5 >> 6;
      uVar6 = -1L << (uVar5 & 0x3f) & (*(ulong *)(puVar4 + uVar8 * 8 + 0x38) ^ 0xffffffffffffffff);
      if (uVar6 == 0) {
        bVar3 = false;
        uVar6 = 0x3f - uVar9 >> 6;
        do {
          uVar5 = uVar8 + 1;
          if ((uVar5 == uVar6) && (bVar3)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1000395a8);
            (*pcVar2)();
          }
          uVar8 = 0;
          if (uVar5 != uVar6) {
            uVar8 = uVar5;
          }
          bVar3 = (bool)(uVar5 == uVar6 | bVar3);
        } while (*(ulong *)(puVar4 + uVar8 * 8 + 0x38) == 0xffffffffffffffff);
        uVar6 = ~*(ulong *)(puVar4 + uVar8 * 8 + 0x38);
        uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
        uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
        uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
        uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
        uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) + uVar8 * 0x40;
      }
      else {
        uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
        uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
        uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
        uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
        uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar5 & 0x7fffffffffffffc0;
      }
      uVar8 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar4 + uVar8 + 0x38) = 1L << (uVar6 & 0x3f) | *(ulong *)(puVar4 + uVar8 + 0x38);
      *(undefined4 *)(*(long *)(puVar4 + 0x30) + uVar6 * 4) = uVar1;
      *(long *)(puVar4 + 0x10) = *(long *)(puVar4 + 0x10) + 1;
      bVar3 = SBORROW8((long)param_3,1);
      param_3 = param_3 + -1;
      if (bVar3) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1000395ac);
        (*pcVar2)();
      }
      lVar7 = lVar10;
    } while (param_3 != (undefined *)0x0);
  }
LAB_100039438:
  _swift_release(param_4);
  return puVar4;
}

