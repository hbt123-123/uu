// rea decompile_all
// name: FUN_100279828
// address: 0x100279828
// body: available
// range: 0x100279828-0x10027994f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100279828(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  code *pcVar7;
  undefined8 *puVar8;
  long lVar9;
  
  lVar4 = 0;
  FUN_100277ad0();
  puVar8 = (undefined8 *)
           (&stack0xffffffffffffffc0 +
           -(*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0));
  FUN_100082394();
  puVar5 = puVar8;
  _swift_getEnumCaseMultiPayload(puVar8,lVar4);
  bVar3 = (int)puVar5 != 2;
  if (bVar3) {
    FUN_1000d27dc(puVar8,FUN_100277ad0);
    lVar4 = 0;
    __s10Foundation3URLVMa();
    pcVar7 = *(code **)(*(long *)(lVar4 + -8) + 0x38);
  }
  else {
    _swift_errorRelease(*puVar8);
    puVar6 = &DAT_100a82468;
    FUN_100004bb4(&DAT_100a82468,&DAT_100816c00);
    iVar1 = *(int *)(puVar6 + 0x30);
    iVar2 = *(int *)(puVar6 + 0x40);
    lVar4 = 0;
    __s10Foundation3URLVMa();
    lVar9 = *(long *)(lVar4 + -8);
    (**(code **)(lVar9 + 0x20))(param_1,(undefined1 *)((long)puVar8 + (long)iVar2),lVar4);
    (**(code **)(lVar9 + 8))((undefined1 *)((long)puVar8 + (long)iVar1),lVar4);
    pcVar7 = *(code **)(lVar9 + 0x38);
  }
  (*pcVar7)(param_1,bVar3,1,lVar4);
  return;
}

