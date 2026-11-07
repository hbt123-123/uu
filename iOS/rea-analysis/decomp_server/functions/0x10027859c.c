// rea decompile_all
// name: FUN_10027859c
// address: 0x10027859c
// body: available
// range: 0x10027859c-0x100278687 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_10027859c(void)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  code *pcVar7;
  
  lVar3 = 0;
  FUN_100277ad0();
  puVar6 = (undefined8 *)
           (&stack0xffffffffffffffc0 +
           -(*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0));
  FUN_100082394();
  puVar4 = puVar6;
  _swift_getEnumCaseMultiPayload(puVar6,lVar3);
  if ((int)puVar4 == 2) {
    _swift_errorRelease(*puVar6);
    puVar5 = &DAT_100a82468;
    FUN_100004bb4(&DAT_100a82468,&DAT_100816c00);
    iVar1 = *(int *)(puVar5 + 0x30);
    iVar2 = *(int *)(puVar5 + 0x40);
    lVar3 = 0;
    __s10Foundation3URLVMa();
    pcVar7 = *(code **)(*(long *)(lVar3 + -8) + 8);
    (*pcVar7)((undefined1 *)((long)puVar6 + (long)iVar2),lVar3);
    (*pcVar7)((undefined1 *)((long)puVar6 + (long)iVar1),lVar3);
  }
  else {
    FUN_1000d27dc(puVar6,FUN_100277ad0);
  }
  return (int)puVar4 == 2;
}

