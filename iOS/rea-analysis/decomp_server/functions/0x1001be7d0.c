// rea decompile_all
// name: FUN_1001be7d0
// address: 0x1001be7d0
// body: available
// range: 0x1001be7d0-0x1001be96b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_1001be7d0(undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  long lVar2;
  undefined1 *puVar3;
  long extraout_x8;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_f0 [16];
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined4 local_c6;
  undefined2 local_c2;
  undefined1 local_c0;
  undefined1 local_b8;
  undefined1 local_b0 [8];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined1 local_90;
  undefined8 local_88;
  undefined1 local_80;
  undefined1 local_7f;
  undefined4 local_7e;
  undefined2 local_7a;
  undefined8 local_78;
  
  lVar2 = 0;
  uVar5 = param_1;
  __s10Foundation4DateVMa();
  lVar4 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar4 + 0x40));
  FUN_100401b14(0);
  uVar1 = 0x88;
  local_e0 = param_1;
  uStack_d8 = param_2;
  FUN_1003fb45c(FUN_1001c1588,auStack_f0,0xd00000000000008f,0x800000010089cc40,0xd000000000000017,
                0x800000010089ce90,0x6e,5);
  FUN_1001be744();
  local_b8 = 1;
  local_c0 = 1;
  __s10Foundation4DateVACycfC(auStack_f0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  __s10Foundation4DateV21timeIntervalSince1970Sdvg();
  (**(code **)(lVar4 + 8))(auStack_f0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar2);
  local_98 = 0;
  local_90 = local_b8;
  local_88 = 0;
  local_80 = local_c0;
  local_7f = 5;
  local_7e = local_c6;
  local_7a = local_c2;
  puVar3 = local_b0;
  local_b0[0] = uVar1;
  local_a8 = param_1;
  uStack_a0 = param_2;
  local_78 = uVar5;
  FUN_10011878c(puVar3,6);
  return (uint)puVar3 & 1;
}

