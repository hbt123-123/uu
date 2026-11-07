// rea decompile_all
// name: FUN_100123d80
// address: 0x100123d80
// body: available
// range: 0x100123d80-0x100123ecb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100123e24) */

undefined8 FUN_100123d80(undefined8 param_1,ulong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined1 auStack_c0 [16];
  undefined8 *local_b0;
  undefined8 *puStack_a8;
  undefined1 local_a0;
  undefined8 local_98;
  undefined1 local_90;
  undefined8 local_78;
  ulong uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  local_78 = param_1;
  if (param_2 >> 0x3c < 0xf) {
    local_40 = 0;
    uStack_58 = 0;
    local_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uVar1 = param_1;
    uVar2 = param_2;
    FUN_100008184();
    FUN_100436934();
    local_78 = uVar1;
    uStack_70 = uVar2;
    local_68 = param_3;
    (*(code *)PTR____chkstk_darwin_100995498)();
    local_b0 = &local_78;
    puStack_a8 = &local_60;
    local_a0 = 0;
    local_98 = 100;
    local_90 = 0;
    FUN_10012308c(FUN_100123ecc,auStack_c0,param_1,param_2);
    FUN_100006cc8(param_1,param_2);
    FUN_100006cc8(param_1,param_2);
    FUN_100040bb4(&local_60,&DAT_100a79820,&DAT_100812f70);
  }
  return local_78;
}

