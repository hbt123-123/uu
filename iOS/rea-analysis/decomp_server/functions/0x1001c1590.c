// rea decompile_all
// name: FUN_1001c1590
// address: 0x1001c1590
// body: available
// range: 0x1001c1590-0x1001c16b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_1001c1590(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long extraout_x8;
  long lVar2;
  undefined1 auStack_a0 [16];
  undefined1 *local_90;
  undefined1 local_88 [8];
  undefined8 local_80;
  undefined1 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 local_60;
  undefined8 local_58;
  
  lVar1 = 0;
  __s10Foundation4DateVMa();
  lVar2 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar2 + 0x40));
  __s10Foundation4DateVACycfC(auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  __s10Foundation4DateV21timeIntervalSince1970Sdvg();
  (**(code **)(lVar2 + 8))(auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
  local_88[0] = 0;
  local_80 = 0;
  local_78 = 1;
  local_60 = 5;
  local_70 = param_2;
  uStack_68 = param_3;
  local_58 = param_1;
  FUN_100401b14(0);
  local_90 = local_88;
  FUN_1003fb45c(thunk_FUN_1001c1568,auStack_a0,0xd000000000000092,0x8000000100882970,
                0xd000000000000017,0x800000010088d2a0,0x2de,0);
  FUN_10011b7b4(param_2,param_3);
  return (uint)param_2 & 1;
}

