// rea decompile_all
// name: FUN_100123f30
// address: 0x100123f30
// body: available
// range: 0x100123f30-0x1001240eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100124044) */

undefined8 FUN_100123f30(undefined8 param_1,ulong param_2)

{
  char cVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 auStack_c0 [16];
  undefined8 *local_b0;
  long *plStack_a8;
  undefined1 local_a0;
  undefined8 local_98;
  undefined1 local_90;
  undefined8 local_78;
  ulong uStack_70;
  ulong local_68;
  long local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  local_78 = param_1;
  if (param_2 >> 0x3c < 0xf) {
    FUN_100008184(param_1,param_2);
    uVar4 = param_2;
    FUN_10004cd9c(&local_60,4,param_1);
    FUN_1001227a8(local_60,uStack_58);
    if ((((*(long *)(local_60 + 0x10) == 4) && (*(char *)(local_60 + 0x20) == 'T')) &&
        (*(char *)(local_60 + 0x21) == 'E')) && (*(char *)(local_60 + 0x22) == 'R')) {
      cVar1 = *(char *)(local_60 + 0x23);
      _swift_bridgeObjectRelease();
      if (cVar1 == 'M') {
        return param_1;
      }
    }
    else {
      _swift_bridgeObjectRelease();
    }
    local_40 = 0;
    uStack_58 = 0;
    local_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uVar2 = param_1;
    uVar3 = param_2;
    FUN_100008184();
    FUN_10047466c();
    local_78 = uVar2;
    uStack_70 = uVar3;
    local_68 = uVar4;
    (*(code *)PTR____chkstk_darwin_100995498)();
    local_b0 = &local_78;
    plStack_a8 = &local_60;
    local_a0 = 0;
    local_98 = 100;
    local_90 = 0;
    FUN_10012308c(FUN_100124254,auStack_c0,param_1,param_2);
    FUN_100006cc8(param_1,param_2);
    FUN_100006cc8(param_1,param_2);
    FUN_100040bb4(&local_60,&DAT_100a79820,&DAT_100812f70);
  }
  return local_78;
}

