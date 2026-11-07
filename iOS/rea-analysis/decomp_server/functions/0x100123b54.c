// rea decompile_all
// name: FUN_100123b54
// address: 0x100123b54
// body: available
// range: 0x100123b54-0x100123d1b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100123c38) */
/* WARNING: Removing unreachable block (ram,0x000100123c98) */

undefined8 FUN_100123b54(undefined8 param_1,ulong param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long extraout_x8;
  undefined1 auStack_d0 [16];
  undefined8 auStack_c0 [2];
  undefined1 auStack_b0 [8];
  undefined8 uStack_a8;
  undefined1 auStack_a0 [24];
  undefined8 local_88;
  ulong uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  lVar1 = 0;
  __sSS10FoundationE8EncodingVMa();
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_88 = param_1;
  if (param_2 >> 0x3c < 0xf) {
    local_50 = 0;
    uStack_68 = 0;
    local_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uVar2 = param_1;
    uVar3 = param_2;
    FUN_100008184();
    FUN_10047466c();
    local_88 = uVar2;
    uStack_80 = uVar3;
    local_78 = param_3;
    (*(code *)PTR____chkstk_darwin_100995498)();
    *(undefined8 **)((long)auStack_c0 + lVar1) = &local_88;
    *(undefined8 **)((long)auStack_c0 + lVar1 + 8) = &local_70;
    auStack_b0[lVar1] = 0;
    *(undefined8 *)((long)&uStack_a8 + lVar1) = 100;
    auStack_a0[lVar1] = 0;
    FUN_10012308c(FUN_100123d1c,auStack_d0 + lVar1,param_1,param_2);
    FUN_100006cc8(param_1,param_2);
    FUN_100006cc8(param_1,param_2);
    FUN_100040bb4(&local_70,&DAT_100a79820,&DAT_100812f70);
  }
  return local_88;
}

