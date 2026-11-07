// rea decompile_all
// name: FUN_1001c0234
// address: 0x1001c0234
// body: available
// range: 0x1001c0234-0x1001c0377 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_1001c0234(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  long lVar2;
  undefined8 *puVar3;
  long extraout_x8;
  long unaff_x20;
  undefined8 uVar4;
  undefined1 uVar5;
  long lVar6;
  undefined1 auStack_a0 [7];
  undefined1 local_99;
  undefined8 local_98;
  undefined8 local_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_70;
  undefined8 local_68;
  
  lVar2 = 0;
  __s10Foundation4DateVMa();
  lVar6 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar6 + 0x40));
  uVar4 = *(undefined8 *)(unaff_x20 + _TtC14UURemoteServer12InputHandler::keyCodeStates);
  bVar1 = (param_3 & 1) == 0;
  local_98 = param_2;
  if (bVar1) {
    local_99 = 0;
    _swift_retain(uVar4);
    FUN_1003be2ac(&local_99,&local_98);
    _swift_release(uVar4);
    uVar5 = 2;
  }
  else {
    uVar5 = 1;
    local_99 = 1;
    _swift_retain(uVar4);
    FUN_1003be2ac(&local_99,&local_98);
    _swift_release(uVar4);
  }
  __s10Foundation4DateVACycfC(auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  __s10Foundation4DateV21timeIntervalSince1970Sdvg();
  (**(code **)(lVar6 + 8))(auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar2);
  local_98 = CONCAT71(local_98._1_7_,uVar5);
  local_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  puVar3 = &local_98;
  local_90 = param_2;
  local_70 = bVar1;
  local_68 = param_1;
  FUN_1001196ac(puVar3);
  return (uint)puVar3 & 1;
}

