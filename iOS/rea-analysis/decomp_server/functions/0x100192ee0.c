// rea decompile_all
// name: FUN_100192ee0
// address: 0x100192ee0
// body: available
// range: 0x100192ee0-0x10019303b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

long FUN_100192ee0(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar3;
  
  if (param_4 >> 0x3c < 0xf) {
    uVar3 = param_3;
    FUN_100008184(param_3,param_4);
    uVar1 = (undefined4)uVar3;
    FUN_1001932cc();
    lVar2 = 0;
    FUN_10016dae4();
    _swift_allocObject();
    FUN_10016d3cc();
    *(undefined1 *)(lVar2 + 0x18) = 1;
    *(undefined4 *)(lVar2 + 0x14) = uVar1;
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    uVar5 = *(undefined8 *)(lVar2 + 0x28);
    *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(lVar2 + 0x28) = uVar3;
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(uVar5);
    uVar4 = param_3;
    FUN_100193990(param_3,param_4);
    uVar3 = *(undefined8 *)(lVar2 + 0x60);
    uVar5 = *(undefined8 *)(lVar2 + 0x68);
    *(undefined8 *)(lVar2 + 0x60) = param_3;
    *(ulong *)(lVar2 + 0x68) = param_4;
    *(undefined8 *)(lVar2 + 0x70) = uVar4;
    FUN_100008184(param_3,param_4);
    FUN_100006cc8(uVar3,uVar5);
    *(undefined8 *)(lVar2 + 0x58) = param_2;
    FUN_100401b14(0);
    FUN_1003fb45c(FUN_100193a0c,lVar2,0xd0000000000000a8,0x8000000100894f80,0xd000000000000037,
                  0x8000000100899070,0x54,7);
    FUN_100006cc8(param_3,param_4);
  }
  else {
    lVar2 = 0;
  }
  return lVar2;
}

