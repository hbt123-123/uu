// rea decompile_all
// name: FUN_100261064
// address: 0x100261064
// body: available
// range: 0x100261064-0x100261167 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_100261064(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 local_60;
  undefined8 uStack_58;
  
  lVar3 = 0;
  FUN_100275594();
  lVar5 = (long)&local_60 - (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x38);
  uStack_58 = *(undefined8 *)(unaff_x20 + 0x20);
  local_60 = *(undefined8 *)(unaff_x20 + 0x18);
  FUN_100082394(param_1,lVar5,FUN_100275594);
  uVar4 = *(undefined8 *)(unaff_x20 + _TtC4Moya8Endpoint::httpHeaderFields);
  lVar3 = 0;
  FUN_100261540();
  _swift_allocObject();
  *(undefined8 *)(lVar3 + 0x10) = uVar7;
  *(undefined8 *)(lVar3 + 0x20) = uStack_58;
  *(undefined8 *)(lVar3 + 0x18) = local_60;
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
  *(undefined8 *)(lVar3 + 0x30) = uVar2;
  *(undefined8 *)(lVar3 + 0x38) = uVar6;
  FUN_100260f1c(lVar5,lVar3 + _TtC4Moya8Endpoint::task);
  *(undefined8 *)(lVar3 + _TtC4Moya8Endpoint::httpHeaderFields) = uVar4;
  _swift_bridgeObjectRetain(uVar4);
  _swift_bridgeObjectRetain(local_60);
  _swift_retain(uVar1);
  _swift_bridgeObjectRetain(uVar6);
  return lVar3;
}

