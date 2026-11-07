// rea decompile_all
// name: FUN_100357644
// address: 0x100357644
// body: available
// range: 0x100357644-0x100357713 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100357644(void)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined1 *puVar4;
  long lVar5;
  code *pcVar6;
  long lVar7;
  
  lVar1 = 0;
  __s10Foundation12CharacterSetVMa();
  lVar7 = *(long *)(lVar1 + -8);
  uVar3 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
  puVar4 = &stack0xffffffffffffffc0 + -uVar3;
  lVar5 = (long)puVar4 - uVar3;
  FUN_10022403c();
  lVar2 = lVar1;
  FUN_10021bec0(lVar1,&DAT_100b36600);
  __s10Foundation12CharacterSetV12charactersInACSSh_tcfC
            (lVar5,&DAT_d000000000000010,0x80000001008abb70);
  __s10Foundation12CharacterSetV15urlQueryAllowedACvgZ(puVar4);
  __s10Foundation12CharacterSetV11subtractingyA2CF(lVar2,lVar5);
  pcVar6 = *(code **)(lVar7 + 8);
  (*pcVar6)(puVar4,lVar1);
  (*pcVar6)(lVar5,lVar1);
  return;
}

