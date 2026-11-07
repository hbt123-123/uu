// rea decompile_all
// name: FUN_1007c573c
// address: 0x1007c573c
// body: available
// range: 0x1007c573c-0x1007c5913 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_1007c573c(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  code *pcVar11;
  undefined1 auStack_90 [8];
  undefined *local_88 [3];
  undefined *local_70;
  undefined *local_68;
  
  puVar6 = &DAT_100abce00;
  FUN_1007b4550();
  puVar5 = auStack_90 + -(*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  FUN_1007c5008();
  lVar10 = *(long *)(lVar2 + -8);
  lVar7 = (long)puVar5 - (*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  if (param_1 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    lVar8 = *(long *)(param_1 + 0x10);
    puVar6 = PTR___swiftEmptyArrayStorage_100995ea0;
    if (lVar8 != 0) {
      local_68 = PTR___swiftEmptyArrayStorage_100995ea0;
      FUN_1007c907c(0,lVar8,0);
      param_1 = param_1 + ((ulong)*(byte *)(lVar10 + 0x50) + 0x20 &
                          ((ulong)*(byte *)(lVar10 + 0x50) ^ 0xffffffffffffffff));
      lVar9 = *(long *)(lVar10 + 0x48);
      pcVar11 = *(code **)(lVar10 + 0x38);
      puVar6 = local_68;
      do {
        FUN_1007c5c00(param_1,lVar7);
        FUN_1007c5c00(lVar7,puVar5);
        (*pcVar11)(puVar5,0,1,lVar2);
        puVar3 = &DAT_100abce10;
        FUN_1007b4550();
        puVar4 = &DAT_1009eb918;
        local_70 = puVar3;
        _swift_allocObject(&DAT_1009eb918,0x30,7);
        local_88[0] = puVar4;
        FUN_1007c5550(puVar4 + 0x10,puVar5);
        FUN_1007c62b0(puVar5,&DAT_100abce00);
        FUN_1007c5cb8(lVar7);
        puVar3 = puVar6;
        _swift_isUniquelyReferenced_nonNull_native();
        if (((ulong)puVar3 & 1) == 0) {
          FUN_1007c907c(0,*(long *)(puVar6 + 0x10) + 1,1);
          puVar6 = local_68;
        }
        uVar1 = *(ulong *)(puVar6 + 0x10);
        if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar1) {
          FUN_1007c907c(1 < *(ulong *)(puVar6 + 0x18),uVar1 + 1,1);
          puVar6 = local_68;
        }
        *(ulong *)(puVar6 + 0x10) = uVar1 + 1;
        FUN_10007f3d4(local_88,puVar6 + uVar1 * 0x20 + 0x20);
        param_1 = param_1 + lVar9;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
  }
  return puVar6;
}

