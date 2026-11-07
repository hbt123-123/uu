// rea decompile_all
// name: FUN_10060c900
// address: 0x10060c900
// body: available
// range: 0x10060c900-0x10060c993 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10060c990 to 0x10060ace8 FUN_10060ace8 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10060c900(undefined8 param_1,code *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  puVar4 = &DAT_100aaffc0;
  FUN_100004bb4(&DAT_100aaffc0,&DAT_100848498);
  uVar5 = (ulong)*(byte *)(*(long *)(puVar4 + -8) + 0x50);
  uVar6 = uVar5 + 0x28 & (uVar5 ^ 0xffffffffffffffff);
  uVar5 = *(long *)(*(long *)(puVar4 + -8) + 0x40) + uVar6 + 7 & 0xfffffffffffffff8;
  puVar1 = (undefined8 *)(unaff_x20 + uVar5);
  (*param_2)(param_1,*(undefined8 *)(unaff_x20 + 0x20),unaff_x20 + uVar6,*puVar1,puVar1[1],
             *(undefined8 *)(unaff_x20 + uVar5 + 0x10),uVar2,uVar3);
  return;
}

