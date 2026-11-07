// rea decompile_all
// name: FUN_1001e7a14
// address: 0x1001e7a14
// body: available
// range: 0x1001e7a14-0x1001e7b67 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001e7a14(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4,
                  undefined8 param_5)

{
  long lVar1;
  long extraout_x8;
  undefined1 *puVar2;
  long lVar3;
  undefined1 auStack_d0 [8];
  undefined8 local_c8;
  undefined8 local_c0;
  code *local_b8;
  undefined1 auStack_b0 [16];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 *local_90;
  undefined1 auStack_80 [16];
  undefined8 local_70;
  undefined8 uStack_68;
  
  lVar1 = 0;
  local_c8 = param_1;
  local_c0 = param_5;
  local_b8 = param_4;
  __s10Foundation4DateVMa();
  lVar3 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar3 + 0x40));
  puVar2 = auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  __s10Foundation4DateVACycfC(puVar2);
  FUN_100401b14(0);
  local_70 = param_2;
  uStack_68 = param_3;
  FUN_1003fb48c(thunk_FUN_1001fa460,auStack_80,0xd000000000000094,0x8000000100880950,
                0xd00000000000002a,0x8000000100880ed0,0x226,0);
  (*local_b8)(local_c8);
  local_a0 = param_2;
  uStack_98 = param_3;
  local_90 = puVar2;
  FUN_1003fb48c(thunk_FUN_1001fa468,auStack_b0,0xd000000000000094,0x8000000100880950,
                0xd00000000000002a,0x8000000100880ed0,0x228,0);
  (**(code **)(lVar3 + 8))(puVar2,lVar1);
  return;
}

