// rea decompile_all
// name: FUN_10038315c
// address: 0x10038315c
// body: available
// range: 0x10038315c-0x1003831ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10038315c(string *param_1,char *param_2)

{
  char *pcVar1;
  ulong uVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  string *unaff_x20;
  
  uVar2 = *(ulong *)(param_2 + 8);
  pcVar4 = *(char **)param_2;
  if (-1 < param_2[0x17]) {
    uVar2 = (ulong)(byte)param_2[0x17];
    pcVar4 = param_2;
  }
  pcVar1 = pcVar4 + uVar2;
  pcVar6 = pcVar1;
  pcVar3 = pcVar4;
  pcVar5 = pcVar1;
  if (uVar2 != 0) {
    do {
      while (pcVar6 = pcVar3, pcVar7 = pcVar6 + 1, *pcVar6 == '/') {
        pcVar3 = pcVar6 + 1;
        pcVar5 = pcVar6;
        if (pcVar7 == pcVar1) goto LAB_1003831dc;
      }
      pcVar6 = pcVar5;
      pcVar3 = pcVar7;
    } while (pcVar7 != pcVar1);
  }
LAB_1003831dc:
  pcVar3 = (char *)0x0;
  if (pcVar6 != pcVar1) {
    pcVar3 = pcVar6 + (1 - (long)pcVar4);
  }
  std::string::string(unaff_x20,param_1,(ulong)param_2,(ulong)pcVar3,(allocator *)0xffffffffffffffff
                     );
  return;
}

