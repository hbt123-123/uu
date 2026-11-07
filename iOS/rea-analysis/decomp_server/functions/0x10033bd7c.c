// rea decompile_all
// name: FUN_10033bd7c
// address: 0x10033bd7c
// body: available
// range: 0x10033bd7c-0x10033bf5b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

long FUN_10033bd7c(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  undefined8 param_6)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined4 *puVar5;
  long lVar6;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [24];
  long local_70;
  undefined8 uStack_68;
  
  puVar1 = &DAT_100a84698;
  FUN_100004bb4(&DAT_100a84698,&DAT_100818fa8);
  lVar6 = *(long *)(*(long *)(puVar1 + -8) + 0x40);
  local_70 = param_5;
  uStack_68 = param_6;
  FUN_1000efc08(auStack_88);
  (**(code **)(*(long *)(param_5 + -8) + 0x20))();
  puVar1 = &DAT_100a846a0;
  FUN_100004bb4(&DAT_100a846a0,&DAT_100818fb0);
  (**(code **)(*(long *)(puVar1 + -8) + 0x38))
            (auStack_90 + -(lVar6 + 0xfU & 0xfffffffffffffff0),1,1,puVar1);
  plVar2 = (long *)&DAT_100a846a8;
  FUN_100004bb4(&DAT_100a846a8,&DAT_100818fb8);
  _swift_allocObject();
  lVar3 = 0;
  FUN_1002c6dd8();
  lVar4 = lVar3;
  _swift_allocObject();
  puVar5 = (undefined4 *)0x4;
  _swift_slowAlloc(4,0xffffffffffffffff);
  *(undefined4 **)(lVar4 + 0x10) = puVar5;
  *puVar5 = 0;
  plVar2[2] = lVar4;
  FUN_1000a00a8(auStack_90 + -(lVar6 + 0xfU & 0xfffffffffffffff0),
                (undefined *)((long)plVar2 + *(long *)(*plVar2 + 0x60)),&DAT_100a84698,
                &DAT_100818fa8);
  *(long **)(param_4 + 0x10) = plVar2;
  *(undefined8 *)(param_4 + 0x20) = param_1;
  FUN_1000b142c(auStack_88,param_4 + 0x28);
  *(undefined8 *)(param_4 + 0x50) = *(undefined8 *)(param_3 + 0x30);
  puVar1 = &DAT_100a846b0;
  FUN_100004bb4(&DAT_100a846b0,&DAT_100818fc0);
  _swift_allocObject();
  _swift_allocObject(lVar3,0x18,7);
  _swift_retain(param_3);
  puVar5 = (undefined4 *)0x4;
  _swift_slowAlloc(4,0xffffffffffffffff);
  *(undefined4 **)(lVar3 + 0x10) = puVar5;
  *puVar5 = 0;
  FUN_10003f094(auStack_88);
  *(long *)(puVar1 + 0x10) = lVar3;
  *(long *)(puVar1 + 0x18) = param_3;
  *(undefined **)(param_4 + 0x18) = puVar1;
  return param_4;
}

