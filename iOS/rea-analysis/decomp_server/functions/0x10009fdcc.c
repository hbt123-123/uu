// rea decompile_all
// name: FUN_10009fdcc
// address: 0x10009fdcc
// body: available
// range: 0x10009fdcc-0x10009fe63 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10009fe60 to 0x1000a0940 FUN_1000a0940 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10009fdcc(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  long unaff_x20;
  ulong uVar6;
  
  lVar3 = 0;
  __s10Foundation3URLVMa();
  uVar5 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  uVar5 = uVar5 + 0x18 & (uVar5 ^ 0xffffffffffffffff);
  lVar3 = uVar5 + *(long *)(*(long *)(lVar3 + -8) + 0x40);
  uVar6 = lVar3 + 0x1fU & 0xfffffffffffffff8;
  puVar4 = &DAT_100a766c0;
  FUN_100004bb4(&DAT_100a766c0,&DAT_10080b1c8);
  puVar1 = (undefined8 *)(unaff_x20 + (lVar3 + 7U & 0xfffffffffffffff8));
  puVar2 = (undefined8 *)(unaff_x20 + uVar6);
  FUN_1000a0940(*(undefined8 *)(unaff_x20 + 0x10),unaff_x20 + uVar5,*puVar1,puVar1[1],
                *(undefined1 *)(puVar1 + 2),*puVar2,puVar2[1],
                unaff_x20 +
                (*(byte *)(*(long *)(puVar4 + -8) + 0x50) + uVar6 + 0x10 &
                ((ulong)*(byte *)(*(long *)(puVar4 + -8) + 0x50) ^ 0xffffffffffffffff)));
  return;
}

