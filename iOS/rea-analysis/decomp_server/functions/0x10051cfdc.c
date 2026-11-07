// rea decompile_all
// name: FUN_10051cfdc
// address: 0x10051cfdc
// body: available
// range: 0x10051cfdc-0x10051d0db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10051cfdc(undefined1 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined1 *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *unaff_x20;
  ulong uVar5;
  
  puVar2 = param_1;
  FUN_100537eec(param_1,param_2,param_4,param_5);
  if (((ulong)puVar2 & 1) == 0) {
    FUN_10051dfb8();
    _swift_allocError(&DAT_1009cf9b8,puVar2,0,0);
    *puVar2 = 0;
    _swift_willThrow();
  }
  else {
    uVar5 = *unaff_x20;
    _swift_bridgeObjectRetain(param_2);
    uVar3 = uVar5;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar4 = uVar5;
    if ((uVar3 & 1) == 0) {
      uVar4 = 0;
      FUN_100507174(0,*(long *)(uVar5 + 0x10) + 1,1,uVar5);
    }
    uVar3 = *(ulong *)(uVar4 + 0x10);
    uVar5 = uVar4;
    if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar3) {
      uVar5 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
      FUN_100507174(uVar5,uVar3 + 1,1,uVar4);
    }
    *(ulong *)(uVar5 + 0x10) = uVar3 + 1;
    lVar1 = uVar5 + uVar3 * 0x10;
    *(undefined1 **)(lVar1 + 0x20) = param_1;
    *(undefined8 *)(lVar1 + 0x28) = param_2;
    *unaff_x20 = uVar5;
  }
  return;
}

