// rea decompile_all
// name: FUN_10005f118
// address: 0x10005f118
// body: available
// range: 0x10005f118-0x10005f2c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10005f118(char *param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6)

{
  char cVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auStack_a0 [16];
  undefined8 local_90;
  undefined1 local_74;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  cVar1 = *param_1;
  _swift_beginAccess(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  _swift_weakLoadStrong();
  if (param_2 != 0) {
    if ((*(long *)(param_2 + 0xb8) == param_3) &&
       (_swift_beginAccess(param_2 + 0x70,auStack_70,0,0),
       *(long *)(*(long *)(param_2 + 0x70) + 0x10) == 0)) {
      if (cVar1 == '\x02') {
        uVar2 = 0;
        FUN_100401b14(0);
        (*(code *)PTR____chkstk_darwin_100995498)(uVar2);
        local_90 = param_4;
        FUN_1003fb4bc(FUN_100082c08,auStack_a0,0xd0000000000000a5,0x800000010087d850,
                      0xd000000000000012,0x800000010087e4d0,0x648,0);
        _swift_release(param_2);
      }
      else {
        FUN_100075dc8(param_6);
        uVar5 = *(undefined8 *)(param_2 + 0x40);
        puVar3 = PTR___swiftEmptyArrayStorage_100995ea0;
        FUN_1000cc774(PTR___swiftEmptyArrayStorage_100995ea0);
        _swift_unknownObjectRetain(uVar5);
        local_74 = 1;
        uVar2 = 0x100000000;
        puVar4 = puVar3;
        FUN_10004bca0(puVar3,param_5,0x100000000);
        _swift_bridgeObjectRelease(puVar3);
        FUN_100075118(puVar4,param_5,uVar2);
        _swift_release(param_2);
        _swift_unknownObjectRelease(uVar5);
      }
    }
    else {
      _swift_release();
    }
  }
  return;
}

