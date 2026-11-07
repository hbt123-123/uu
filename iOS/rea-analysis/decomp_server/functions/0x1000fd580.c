// rea decompile_all
// name: FUN_1000fd580
// address: 0x1000fd580
// body: available
// range: 0x1000fd580-0x1000fd7ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000fd580(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  code *param_9,undefined8 param_10)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_e0 [16];
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined *local_c0;
  code *local_a8;
  undefined8 uStack_a0;
  int local_98 [6];
  undefined *local_80;
  undefined *puStack_78;
  undefined *local_70;
  undefined1 local_68;
  
  local_a8 = param_9;
  uStack_a0 = param_10;
  if (DAT_100a73b60 != -1) {
    _swift_once(&DAT_100a73b60,FUN_1000efc4c);
  }
  uVar4 = *(undefined8 *)(DAT_100b360a8 + 0x88);
  puVar2 = &DAT_10099cea0;
  _swift_allocObject(&DAT_10099cea0,0x18,7);
  _swift_unknownObjectWeakInit(puVar2 + 0x10,param_8);
  puVar3 = &DAT_10099d080;
  _swift_allocObject(&DAT_10099d080,0x48,7);
  *(undefined8 *)(puVar3 + 0x10) = param_1;
  *(undefined8 *)(puVar3 + 0x18) = param_2;
  *(undefined8 *)(puVar3 + 0x20) = param_6;
  *(undefined8 *)(puVar3 + 0x28) = param_7;
  *(undefined8 *)(puVar3 + 0x30) = param_3;
  *(undefined8 *)(puVar3 + 0x38) = param_4;
  *(undefined **)(puVar3 + 0x40) = puVar2;
  _swift_retain(uVar4);
  _swift_bridgeObjectRetain(param_2);
  _swift_bridgeObjectRetain(param_7);
  _swift_bridgeObjectRetain(param_4);
  _swift_retain(puVar2);
  local_c0 = puVar3;
  FUN_100084c9c(param_1,param_2,param_3,param_4,param_5,param_6,param_7,thunk_FUN_1001033ec);
  _swift_release(uVar4);
  _swift_release(puVar2);
  _swift_release(puVar3);
  uVar4 = 0;
  FUN_100401b14(0);
  (*(code *)PTR____chkstk_darwin_100995498)(uVar4);
  uVar1 = (uint)param_1 & 1;
  local_c0 = (undefined *)CONCAT71(local_c0._1_7_,(char)uVar1);
  local_d0 = param_6;
  uStack_c8 = param_7;
  FUN_1003fb48c(thunk_FUN_100102888,auStack_e0,0xd000000000000094,0x800000010088a280,
                0xd00000000000001e,0x800000010088a320,99,0);
  local_98[0] = uVar1 - 1;
  local_80 = PTR___ss5Int32VN_100995c78;
  puStack_78 = PTR___ss5Int32VSesWP_100995c90;
  local_70 = PTR___ss5Int32VSEsWP_100995c80;
  local_68 = 1;
  (*local_a8)(local_98);
  FUN_100102518(local_98);
  return;
}

