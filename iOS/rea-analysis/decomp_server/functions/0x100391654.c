// rea decompile_all
// name: FUN_100391654
// address: 0x100391654
// body: available
// range: 0x100391654-0x10039171b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100391718 to 0x10037eac4 FUN_10037eac4 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100391654(undefined8 param_1,long param_2,ulong param_3)

{
  long lVar1;
  int iVar2;
  ulong *puVar3;
  char *pcVar4;
  void *pvVar5;
  ulong uVar6;
  
  lVar1 = **(long **)(param_2 + 0x28);
  uVar6 = ((*(long **)(param_2 + 0x28))[1] - lVar1 >> 3) * -0x5555555555555555;
  if ((lVar1 != 0 && (param_3 <= uVar6 && uVar6 - param_3 != 0)) &&
     (iVar2 = *(int *)(lVar1 + param_3 * 0x18 + 4), iVar2 != 0)) {
    pcVar4 = operator_new(0x1a);
    thunk_FUN_10037e7cc(pcVar4,iVar2);
    *(char **)(param_2 + 0x18) = pcVar4;
    pvVar5 = operator_new(0x18);
    uVar6 = (ulong)(byte)pcVar4[1];
    puVar3 = (ulong *)(pcVar4 + 2);
    if (*pcVar4 != '\0') {
      uVar6 = *(ulong *)(pcVar4 + 2);
      puVar3 = *(ulong **)(pcVar4 + 10);
    }
    FUN_10037d560(pvVar5,puVar3,uVar6);
    *(void **)(param_2 + 0x20) = pvVar5;
    FUN_100391200(param_2);
  }
  FUN_10037eac4(param_1,*(undefined8 *)(param_2 + 0x18));
  return;
}

