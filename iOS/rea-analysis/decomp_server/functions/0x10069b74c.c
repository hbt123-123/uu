// rea decompile_all
// name: FUN_10069b74c
// address: 0x10069b74c
// body: available
// range: 0x10069b74c-0x10069b87f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10069b780 to 0x10069b898 FUN_10069b898 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * FUN_10069b74c(long param_1)

{
  undefined8 *puVar1;
  ulong *puVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  
  lVar4 = *(long *)(param_1 + 0x38);
  if (lVar4 == 0) {
    FUN_10069b898(param_1);
    return (long *)param_1;
  }
  if (*(char *)(lVar4 + 0x47) < '\0') {
    if (*(long *)(lVar4 + 0x38) != 0) goto LAB_10069b864;
  }
  else if (*(char *)(lVar4 + 0x47) != '\0') goto LAB_10069b864;
  FUN_10069b898(param_1);
  std::string::assign((char *)(*(long *)(param_1 + 0x38) + 0x30));
  lVar4 = *(long *)(param_1 + 0x38);
  lVar6 = (long)*(char *)(lVar4 + 0x17);
  if (lVar6 < 0) {
    lVar6 = *(long *)(lVar4 + 8);
  }
  if (lVar6 != 0) {
    std::string::append((char *)(lVar4 + 0x30));
    puVar5 = *(undefined8 **)(param_1 + 0x38);
    puVar1 = (undefined8 *)*puVar5;
    if (-1 < *(char *)((long)puVar5 + 0x17)) {
      puVar1 = puVar5;
    }
    std::string::append((char *)(puVar5 + 6),(ulong)puVar1);
    std::string::append((char *)(*(long *)(param_1 + 0x38) + 0x30));
    lVar4 = *(long *)(param_1 + 0x38);
  }
  lVar6 = (long)*(char *)(lVar4 + 0x2f);
  if (lVar6 < 0) {
    lVar6 = *(long *)(lVar4 + 0x20);
  }
  if (lVar6 != 0) {
    std::string::append((char *)(lVar4 + 0x30));
    lVar4 = *(long *)(param_1 + 0x38);
    puVar2 = (ulong *)*(ulong *)(lVar4 + 0x18);
    if (-1 < *(char *)(lVar4 + 0x2f)) {
      puVar2 = (ulong *)(lVar4 + 0x18);
    }
    std::string::append((char *)(lVar4 + 0x30),(ulong)puVar2);
    std::string::append((char *)(*(long *)(param_1 + 0x38) + 0x30));
    lVar4 = *(long *)(param_1 + 0x38);
  }
LAB_10069b864:
  plVar3 = (long *)(lVar4 + 0x30);
  if (*(char *)(lVar4 + 0x47) < '\0') {
    plVar3 = (long *)*plVar3;
  }
  return plVar3;
}

