// rea decompile_all
// name: FUN_100519568
// address: 0x100519568
// body: available
// range: 0x100519568-0x1005196cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_100519568(undefined8 param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  void *aBlock;
  undefined *puVar6;
  undefined1 auStack_b0 [16];
  undefined8 *local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined *local_80;
  undefined8 local_78;
  code *local_70;
  undefined *puStack_68;
  code *local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_50 = 0;
  uStack_48 = 0;
  local_a0 = &local_50;
  uStack_98 = param_1;
  local_90 = param_2;
  if (DAT_100aa2698 != -1) {
    _swift_once(&DAT_100aa2698,FUN_100518a08);
  }
  uVar2 = DAT_100aab058;
  puVar4 = &DAT_1009cf868;
  _swift_allocObject(&DAT_1009cf868,0x20,7);
  *(code **)(puVar4 + 0x10) = FUN_100519ba0;
  *(undefined1 **)(puVar4 + 0x18) = auStack_b0;
  puVar5 = &DAT_1009cf890;
  _swift_allocObject(&DAT_1009cf890,0x20,7);
  *(code **)(puVar5 + 0x10) = FUN_100102840;
  *(undefined **)(puVar5 + 0x18) = puVar4;
  local_60 = FUN_100102840;
  local_80 = PTR___NSConcreteStackBlock_100995490;
  local_78 = 0x42000000;
  local_70 = FUN_1000fcdcc;
  puStack_68 = &DAT_1009cf8a8;
  local_58 = puVar5;
  aBlock = __Block_copy(&local_80);
  puVar6 = local_58;
  _swift_retain(puVar5);
  _swift_release(puVar6);
  _dispatch_sync(uVar2,aBlock);
  __Block_release(aBlock);
  puVar6 = puVar5;
  _swift_isEscapingClosureAtFileLocation(puVar5,"",0xc4,0xab,0x1e,1);
  _swift_release(puVar4);
  _swift_release(puVar5);
  if (((ulong)puVar6 & 1) == 0) {
    auVar1._8_8_ = uStack_48;
    auVar1._0_8_ = local_50;
    return auVar1;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1005196d0);
  (*pcVar3)();
}

