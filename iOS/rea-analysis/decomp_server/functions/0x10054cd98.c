// rea decompile_all
// name: FUN_10054cd98
// address: 0x10054cd98
// body: available
// range: 0x10054cd98-0x10054ce83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10054cd98(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_5 + -8);
  lVar4 = *(long *)(lVar5 + 0x40);
  uVar2 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,param_6,param_5,PTR___sSTTL_100995860,PTR___s8IteratorSTTl_100995710);
  lVar3 = 0;
  _swift_getTupleTypeMetadata2(0,uVar2,PTR___sSiN_100995968,0,0);
  iVar1 = *(int *)(lVar3 + 0x30);
  (**(code **)(lVar5 + 0x10))
            (&stack0xffffffffffffffa0 + -(lVar4 + 0xfU & 0xfffffffffffffff0),param_4,param_5);
  lVar3 = param_1;
  __sST13_copyContents12initializing8IteratorQz_SitSry7ElementQzG_tFTj
            (param_1,param_2,param_3,param_5,param_6);
  *(long *)(param_1 + iVar1) = lVar3;
  return;
}

