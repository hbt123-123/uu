// rea decompile_all
// name: FUN_1001d3240
// address: 0x1001d3240
// body: available
// range: 0x1001d3240-0x1001d32fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001d32f8 to 0x1007df1a8 _swift_deallocObject (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001d3240(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  ulong uVar4;
  long lVar5;
  
  puVar1 = &DAT_100a7d408;
  FUN_100004bb4(&DAT_100a7d408,&DAT_100812378);
  uVar4 = (ulong)*(byte *)(*(long *)(puVar1 + -8) + 0x50) + 0x31 &
          ((ulong)*(byte *)(*(long *)(puVar1 + -8) + 0x50) ^ 0xffffffffffffffff);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  if (*(ulong *)(unaff_x20 + 0x20) >> 0x3c < 0xf) {
    FUN_100006cdc(*(undefined8 *)(unaff_x20 + 0x18));
  }
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  lVar2 = 0;
  __s7Network7NWErrorOMa();
  lVar5 = *(long *)(lVar2 + -8);
  lVar3 = unaff_x20 + uVar4;
  (**(code **)(lVar5 + 0x30))(lVar3,1,lVar2);
  if ((int)lVar3 == 0) {
    (**(code **)(lVar5 + 8))(unaff_x20 + uVar4,lVar2);
  }
  _swift_deallocObject();
  return;
}

