// rea decompile_all
// name: FUN_10060717c
// address: 0x10060717c
// body: available
// range: 0x10060717c-0x1006071eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1006071e8 to 0x100606ca4 FUN_100606ca4 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10060717c(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  puVar1 = &DAT_100aaffb8;
  FUN_100004c48(&DAT_100aaffb8,&DAT_100848630);
  lVar2 = 0;
  __sScCMa(0,uVar4,puVar1,PTR___ss5ErrorWS_100995c48);
  uVar3 = (ulong)*(byte *)(*(long *)(lVar2 + -8) + 0x50);
  FUN_100606ca4(param_1,unaff_x20 + (uVar3 + 0x18 & (uVar3 ^ 0xffffffffffffffff)),uVar4);
  return;
}

