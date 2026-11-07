// rea decompile_all
// name: FUN_10017be84
// address: 0x10017be84
// body: available
// range: 0x10017be84-0x10017bfff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00010017bf08) */

undefined1  [16] FUN_10017be84(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined1 auStack_a0 [16];
  undefined8 local_90;
  undefined8 local_78;
  ulong uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  uVar2 = param_1;
  FUN_100436a0c();
  _swift_bridgeObjectRetain(param_1);
  _swift_bridgeObjectRelease(uVar2);
  local_68 = param_1;
  uStack_60 = param_2;
  local_58 = param_3;
  FUN_10017c754();
  FUN_100537580(&local_78,0,0,&DAT_1009c9048,PTR___s10Foundation4DataVN_1009961e8,uVar2,
                &PTR_PTR_1009d16b0);
  uVar2 = local_78;
  uVar1 = uStack_70;
  FUN_1001806d8(local_78);
  FUN_100006cdc(local_78,uStack_70);
  if (0xe < uVar1 >> 0x3c) {
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    local_90 = param_1;
    FUN_1003fb4bc(FUN_10017c794,auStack_a0,0xd0000000000000b8,0x8000000100896c10,0xd000000000000025,
                  0x8000000100896cd0,0x4c,0);
    uVar1 = 0xc000000000000000;
    uVar2 = 0;
  }
  _swift_bridgeObjectRelease(param_1);
  FUN_100006cdc(param_2,param_3);
  auVar3._8_8_ = uVar1;
  auVar3._0_8_ = uVar2;
  return auVar3;
}

