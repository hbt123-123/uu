// rea decompile_all
// name: FUN_1006a898c
// address: 0x1006a898c
// body: available
// range: 0x1006a898c-0x1006a8a13 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1006a8a10 to 0x100692dd4 FUN_100692dd4 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006a898c(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  FUN_100692ca0(param_1 + 8);
  FUN_1006aa614();
  uVar7 = *(undefined8 *)(param_1 + 0x30);
  lVar1 = param_1 + 8;
  FUN_100692ca0(lVar1);
  lVar2 = param_1 + 8;
  FUN_100692c98(lVar2);
  FUN_1006aa754(uVar7,lVar1 + lVar2,0);
  uVar3 = param_1 + 8;
  FUN_100692c98(uVar3);
  uVar4 = uVar3;
  FUN_1006aa5d4();
  uVar5 = param_1 + 8;
  FUN_100692c98(uVar5);
  uVar6 = uVar5;
  FUN_1006aa5d4();
  FUN_100692dd4(param_1 + 8,uVar3 + (uVar4 & 0xffffffff),uVar5 + (uVar6 & 0xffffffff));
  return;
}

