// rea decompile_all
// name: FUN_1006a8790
// address: 0x1006a8790
// body: available
// range: 0x1006a8790-0x1006a8867 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006a8790(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  undefined8 uVar9;
  int local_34;
  
  local_34 = 0;
  uVar9 = *(undefined8 *)(param_1 + 0x30);
  lVar3 = param_1 + 8;
  FUN_100692ca0(lVar3);
  lVar4 = param_1 + 8;
  FUN_100692c98(lVar4);
  FUN_1006aa96c(uVar9,lVar3,lVar4,&local_34);
  iVar8 = local_34;
  iVar2 = (int)uVar9;
  if (iVar2 == 0) {
    iVar8 = 0;
    iVar2 = 0;
  }
  else {
    FUN_1006aa5cc();
    uVar5 = param_1 + 8;
    FUN_100692ea0();
    if (uVar5 <= (uint)(iVar2 + iVar8)) {
      uVar6 = param_1 + 8;
      FUN_100692ea0();
      uVar7 = uVar6;
      FUN_1006aa5cc();
      uVar5 = uVar7;
      FUN_1006aa5d4();
      local_34 = (int)uVar6 - ((int)uVar7 + (int)uVar5);
    }
    iVar8 = local_34;
    iVar2 = (int)uVar5;
    FUN_1006aa5cc();
    iVar1 = local_34;
    iVar8 = iVar2 + iVar8;
    FUN_1006aa5cc();
    iVar2 = iVar2 + iVar1;
  }
  FUN_100692dd4(param_1 + 8,iVar8,iVar2);
  return;
}

