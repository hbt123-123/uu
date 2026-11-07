// rea decompile_all
// name: FUN_100593848
// address: 0x100593848
// body: available
// range: 0x100593848-0x100593af7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100593a50) */

void FUN_100593848(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  long unaff_x21;
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  FUN_100593af8(param_1,param_2,param_7,param_8);
  if (unaff_x21 == 0) {
    FUN_100593b94(param_1,param_2,param_7,param_8);
    FUN_100593c30(param_1,param_2,param_7,param_8);
    FUN_100593ccc(param_1,param_2,param_7,param_8);
    FUN_100593d54(param_1,param_2,param_7,param_8);
    FUN_100593df0(param_1,param_2,param_7,param_8);
    FUN_100593e78(param_1,param_2,param_7,param_8);
    FUN_100593f00(param_1,param_2,param_7,param_8);
    FUN_100593f88(param_1,param_2,param_7,param_8);
    FUN_100594010(param_1,param_2,param_7,param_8);
    FUN_100594098(param_1,param_2,param_7,param_8);
    FUN_100594120(param_1,param_2,param_7,param_8);
    FUN_1005941a8(param_1,param_2,param_7,param_8);
    FUN_100594244(param_1,param_2,param_7,param_8);
    FUN_1005942e0(param_1,param_2,param_7,param_8);
    FUN_10059437c(param_1,param_2,param_7,param_8);
    FUN_100594418(param_1,param_2,param_7,param_8);
    FUN_1005944b4(param_1,param_2,param_7,param_8);
    FUN_100594550(param_1,param_2,param_7,param_8);
    FUN_1005945ec(param_1,param_2,param_7,param_8);
    _swift_beginAccess(param_1 + 0xe0,auStack_58,0,0);
    lVar1 = *(long *)(param_1 + 0xe0);
    if (*(long *)(lVar1 + 0x10) != 0) {
      pcVar2 = *(code **)(param_8 + 0x118);
      FUN_1005a86d4();
      _swift_bridgeObjectRetain(lVar1);
      (*pcVar2)();
      _swift_bridgeObjectRelease(lVar1);
    }
    (**(code **)(param_8 + 0x1b0))(param_5,1000,0x20000000,param_7,param_8);
  }
  return;
}

