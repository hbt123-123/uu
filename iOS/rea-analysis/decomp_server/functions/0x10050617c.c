// rea decompile_all
// name: FUN_10050617c
// address: 0x10050617c
// body: available
// range: 0x10050617c-0x10050626b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100506268 to 0x1007de5c0 _free (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10050617c(undefined8 *param_1)

{
  byte bVar1;
  void *pvVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  pvVar2 = (void *)*param_1;
  FUN_10007f314(pvVar2,(long)pvVar2 + 0x50,&DAT_100aaa288,&DAT_100836090);
  bVar1 = *(byte *)((long)pvVar2 + 0x90);
  if (*(long *)((long)pvVar2 + 0x68) == 0) {
    FUN_100040bb4((long)pvVar2 + 0x50,&DAT_100aaa288,&DAT_100836090);
    if ((bVar1 & 1) != 0) {
      FUN_100521964(*(undefined8 *)((long)pvVar2 + 0x88),**(undefined8 **)((long)pvVar2 + 0x80));
    }
  }
  else {
    plVar3 = *(long **)((long)pvVar2 + 0x80);
    FUN_1000a0074((long)pvVar2 + 0x50,(long)pvVar2 + 0x28);
    lVar4 = *plVar3;
    lVar5 = *(long *)((long)pvVar2 + 0x88);
    if ((bVar1 & 1) == 0) {
      uVar6 = *(undefined8 *)((long)pvVar2 + 0x78);
      FUN_1000a0074((long)pvVar2 + 0x28,(long)pvVar2 + 0x50);
      FUN_10054a72c(lVar5,uVar6,(long)pvVar2 + 0x50,lVar4);
    }
    else {
      FUN_1000a0074((long)pvVar2 + 0x28,*(long *)(lVar4 + 0x38) + lVar5 * 0x28);
    }
  }
  FUN_100040bb4(pvVar2,&DAT_100aaa288,&DAT_100836090);
  _free(pvVar2);
  return;
}

