// rea decompile_all
// name: FUN_10015a2a0
// address: 0x10015a2a0
// body: available
// range: 0x10015a2a0-0x10015a427 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10015a2a0(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_1c0 [16];
  undefined8 local_1b0;
  long lStack_1a8;
  undefined8 *local_1a0;
  undefined8 uStack_198;
  undefined8 local_188;
  undefined1 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined4 local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined1 local_150;
  undefined1 auStack_148 [160];
  undefined8 local_a8;
  undefined1 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_68;
  
  param_2 = param_2 + _TtC14UURemoteServer18ClipboardPCManager::managerDelegate;
  _swift_unknownObjectWeakLoadStrong();
  if (param_2 != 0) {
    uStack_158 = 0xc000000000000000;
    local_160 = 0;
    uVar1 = *(undefined8 *)(param_3 + 8);
    uVar2 = *(undefined8 *)(param_3 + 0x10);
    _swift_bridgeObjectRetain(uVar2);
    _swift_bridgeObjectRelease(0xe000000000000000);
    local_168 = 0;
    local_188 = 2;
    local_180 = 1;
    local_150 = 1;
    local_a8 = 2;
    local_a0 = 1;
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0xe000000000000000;
    local_68 = 0;
    local_178 = uVar1;
    local_170 = uVar2;
    local_98 = uVar1;
    uStack_90 = uVar2;
    FUN_100193df4(auStack_148,&local_a8);
    FUN_1001bddd8(param_4,auStack_148);
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    local_1a0 = &local_188;
    local_1b0 = param_4;
    lStack_1a8 = param_3;
    uStack_198 = param_1;
    FUN_1003fb45c(FUN_10016c3d8,auStack_1c0,0xd0000000000000a4,0x800000010088d870,
                  &DAT_d000000000000018,0x80000001008951f0,0x15a,7);
    _swift_unknownObjectRelease(param_2);
    FUN_10016b308(auStack_148);
    uVar2 = uStack_158;
    uVar1 = local_160;
    _swift_bridgeObjectRelease(local_170);
    FUN_100006cdc(uVar1,uVar2);
  }
  return;
}

