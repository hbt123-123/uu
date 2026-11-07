// rea decompile_all
// name: FUN_1001e03b8
// address: 0x1001e03b8
// body: available
// range: 0x1001e03b8-0x1001e05ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001e03b8(undefined8 *param_1,code *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  code *pcVar4;
  long lVar5;
  undefined1 auStack_b0 [16];
  undefined8 *local_a0;
  code *pcStack_98;
  undefined8 *local_90;
  code *pcStack_88;
  undefined8 *local_78;
  code *pcStack_70;
  undefined8 local_68;
  
  puVar3 = param_1;
  pcVar4 = param_2;
  if (DAT_100a73b60 != -1) {
    puVar3 = &DAT_100a73b60;
    pcVar4 = FUN_1000efc4c;
    _swift_once();
  }
  lVar5 = *(long *)(*(long *)(DAT_100b360a8 + 0x28) +
                   _TtC14UURemoteServer15StreamerManager::dispatcher);
  if (lVar5 == 0) {
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    local_90 = param_1;
    pcStack_88 = param_2;
    FUN_1003fb48c(FUN_1001e05ac,&local_a0,0xd000000000000095,0x8000000100889250,0xd000000000000026,
                  0x800000010089e680,0x347,0);
  }
  else {
    uVar2 = *(undefined4 *)
             (*(long *)(lVar5 + _TtC14UURemoteServer18StreamerDispatcher::room) + 0x10);
    FUN_10047466c();
    local_78 = puVar3;
    pcStack_70 = pcVar4;
    local_68 = param_3;
    FUN_100474020(0,0xc000000000000000);
    uVar1 = local_68;
    pcVar4 = pcStack_70;
    puVar3 = local_78;
    FUN_1001ad794(uVar2,local_78,pcStack_70,local_68,3);
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    local_90 = (undefined8 *)CONCAT44(local_90._4_4_,uVar2);
    local_a0 = param_1;
    pcStack_98 = param_2;
    FUN_1003fb48c(FUN_1001e05b4,auStack_b0,0xd000000000000095,0x8000000100889250,0xd000000000000026,
                  0x800000010089e680,0x34f,0);
    FUN_100006cdc(puVar3,pcVar4);
    _swift_release(uVar1);
  }
  return;
}

