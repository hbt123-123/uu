// rea decompile_all
// name: FUN_10052b76c
// address: 0x10052b76c
// body: available
// range: 0x10052b76c-0x10052b87f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_10052b76c(void)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  
  puVar4 = PTR___swiftEmptyArrayStorage_100995ea0;
  FUN_1004fa224(0x5a41);
  FUN_1004fa224(0x7a61);
  FUN_1004fa224(0x3930);
  puVar5 = puVar4;
  _swift_isUniquelyReferenced_nonNull_native();
  puVar3 = puVar4;
  if (((ulong)puVar5 & 1) == 0) {
    puVar3 = (undefined *)0x0;
    FUN_100506f84(0,*(long *)(puVar4 + 0x10) + 1,1,puVar4);
  }
  uVar2 = *(ulong *)(puVar3 + 0x10);
  uVar6 = *(ulong *)(puVar3 + 0x18);
  uVar7 = uVar6 >> 1;
  puVar4 = puVar3;
  if (uVar7 <= uVar2) {
    puVar4 = (undefined *)(ulong)(1 < uVar6);
    FUN_100506f84(puVar4,uVar2 + 1,1,puVar3);
    uVar6 = *(ulong *)(puVar4 + 0x18);
    uVar7 = uVar6 >> 1;
  }
  *(ulong *)(puVar4 + 0x10) = uVar2 + 1;
  puVar4[uVar2 + 0x20] = 0x2b;
  lVar1 = uVar2 + 2;
  puVar5 = puVar4;
  if ((long)uVar7 < lVar1) {
    puVar5 = (undefined *)(ulong)(1 < uVar6);
    FUN_100506f84(puVar5,lVar1,1,puVar4);
  }
  *(long *)(puVar5 + 0x10) = lVar1;
  puVar5[uVar2 + 0x21] = 0x2f;
  return puVar5;
}

