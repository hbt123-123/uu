// rea decompile_all
// name: FUN_1004f589c
// address: 0x1004f589c
// body: available
// range: 0x1004f589c-0x1004f596f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1004f592c to 0x1004f5970 FUN_1004f5970 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1004f589c(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar4 = &DAT_100aaa100;
  FUN_100004bb4(&DAT_100aaa100,&DAT_1008386b0);
  _swift_initStaticObject();
  _swift_bridgeObjectRetain(param_1);
  FUN_1004fa13c();
  puVar2 = puVar4;
  _swift_isUniquelyReferenced_nonNull_native();
  puVar3 = puVar4;
  if (((ulong)puVar2 & 1) == 0) {
    puVar3 = (undefined *)0x0;
    FUN_100506f84(0,*(long *)(puVar4 + 0x10) + 1,1,puVar4);
  }
  uVar1 = *(ulong *)(puVar3 + 0x10);
  puVar4 = puVar3;
  if (*(ulong *)(puVar3 + 0x18) >> 1 <= uVar1) {
    puVar4 = (undefined *)(ulong)(1 < *(ulong *)(puVar3 + 0x18));
    FUN_100506f84(puVar4,uVar1 + 1,1,puVar3);
  }
  *(ulong *)(puVar4 + 0x10) = uVar1 + 1;
  puVar4[uVar1 + 0x20] = 0x7d;
  FUN_1004f5970(puVar4);
  return;
}

