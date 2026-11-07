// rea decompile_all
// name: FUN_1007ba120
// address: 0x1007ba120
// body: available
// range: 0x1007ba120-0x1007ba1c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1007ba120(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 local_48 [8];
  undefined1 local_38 [8];
  
  puVar1 = &DAT_100abca70;
  FUN_1007b4550(&DAT_100abca70);
  local_48[0] = 0x13;
  puVar2 = &DAT_100abc958;
  FUN_1007b4550(&DAT_100abc958);
  puVar3 = &DAT_100abca78;
  FUN_1007ba414(&DAT_100abca78,&DAT_100abca70,FUN_1007b6fa4);
  __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeyqd__Sgqd__m_xtKSeRd__lF
            (local_38,puVar1,local_48,puVar2,puVar1,puVar3);
  return;
}

