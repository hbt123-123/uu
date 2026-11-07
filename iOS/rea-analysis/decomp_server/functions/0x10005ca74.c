// rea decompile_all
// name: FUN_10005ca74
// address: 0x10005ca74
// body: available
// range: 0x10005ca74-0x10005cb57 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10005ca74(undefined1 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,uint param_6)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_c8 [24];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  char local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  char local_58;
  
  _swift_beginAccess(param_2 + 0x10,auStack_c8,0,0);
  param_2 = param_2 + 0x10;
  _swift_weakLoadStrong();
  if (param_2 != 0) {
    uVar3 = *(undefined8 *)(param_2 + 0x50);
    _swift_unknownObjectRetain(uVar3);
    _swift_release(param_2);
    FUN_10003990c(&local_b0,param_3);
    _swift_unknownObjectRelease(uVar3);
    if (local_88 != '\x02') {
      uStack_78 = uStack_a8;
      local_80 = local_b0;
      uStack_68 = uStack_98;
      uStack_70 = uStack_a0;
      local_60 = local_90;
      local_58 = local_88;
      puVar1 = &local_80;
      FUN_100045900(puVar1,param_4,param_5,param_6 & 1);
      if (((ulong)puVar1 & 1) != 0) {
        uVar2 = 1;
        goto LAB_10005cb38;
      }
    }
  }
  uVar2 = 2;
LAB_10005cb38:
  *param_1 = uVar2;
  return;
}

