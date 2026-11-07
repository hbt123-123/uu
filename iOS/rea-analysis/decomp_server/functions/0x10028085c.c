// rea decompile_all
// name: FUN_10028085c
// address: 0x10028085c
// body: available
// range: 0x10028085c-0x1002808cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10028085c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  undefined1 auStack_38 [24];
  
  FUN_1002c73dc();
  lVar4 = *(long *)(unaff_x20 + _TtC9Alamofire11DataRequest::dataMutableState);
  uVar3 = *(undefined8 *)(*(long *)(lVar4 + 0x10) + 0x10);
  _os_unfair_lock_lock(uVar3);
  _swift_beginAccess(lVar4 + 0x18,auStack_38,1,0);
  uVar1 = *(undefined8 *)(lVar4 + 0x18);
  uVar2 = *(undefined8 *)(lVar4 + 0x20);
  *(undefined8 *)(lVar4 + 0x20) = 0xf000000000000000;
  *(undefined8 *)(lVar4 + 0x18) = 0;
  FUN_100006cc8(uVar1,uVar2);
  _os_unfair_lock_unlock(uVar3);
  return;
}

