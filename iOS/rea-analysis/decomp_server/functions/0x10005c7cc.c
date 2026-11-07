// rea decompile_all
// name: FUN_10005c7cc
// address: 0x10005c7cc
// body: available
// range: 0x10005c7cc-0x10005c8cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10005c7cc(undefined8 *param_1,long param_2,undefined *param_3,undefined8 param_4,
                  undefined8 param_5,uint param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined8 local_98;
  char local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined7 local_67;
  undefined1 uStack_60;
  undefined8 uStack_5f;
  
  _swift_beginAccess(param_2 + 0x10,auStack_c8,0,0);
  param_2 = param_2 + 0x10;
  _swift_weakLoadStrong();
  if (param_2 == 0) {
    param_1[4] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    *(undefined1 *)(param_1 + 5) = 2;
  }
  else {
    FUN_10003990c(auStack_b0,param_3);
    uVar2 = 0x404e000000000000;
    if (local_88 != '\x02') {
      uVar2 = local_98;
    }
    FUN_10003b530();
    puVar1 = PTR___swiftEmptyArrayStorage_100995ea0;
    if (param_3 != (undefined *)0x0) {
      puVar1 = param_3;
    }
    FUN_1000459c8(&local_80,uVar2,puVar1,param_4,param_5,param_6 & 1);
    _swift_bridgeObjectRelease(puVar1);
    _swift_release(param_2);
    param_1[1] = uStack_78;
    *param_1 = local_80;
    param_1[3] = CONCAT71(local_67,uStack_68);
    param_1[2] = uStack_70;
    *(undefined8 *)((long)param_1 + 0x21) = uStack_5f;
    *(ulong *)((long)param_1 + 0x19) = CONCAT17(uStack_60,local_67);
  }
  return;
}

