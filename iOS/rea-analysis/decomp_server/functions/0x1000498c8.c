// rea decompile_all
// name: FUN_1000498c8
// address: 0x1000498c8
// body: available
// range: 0x1000498c8-0x100049adf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100049acc) */

undefined * FUN_1000498c8(ulong param_1,ulong param_2)

{
  ID self;
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  code *pcVar4;
  undefined1 auStack_80 [16];
  ulong local_70;
  ulong uStack_68;
  undefined *local_60;
  undefined *local_48;
  
  if (DAT_100a73b20 != -1) {
    _swift_once(&DAT_100a73b20,FUN_100045fac);
  }
  self = DAT_100a75cd0;
  _objc_msgSend(DAT_100a75cd0,"lock");
  uVar2 = param_1 & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar2 = param_2 >> 0x38 & 0xf;
  }
  if (uVar2 == 0) {
    FUN_100401b14(0);
    FUN_1003fb48c(FUN_100045fdc,0,0xd00000000000009f,0x800000010087cde0,0xd000000000000012,
                  0x800000010087d040,0x14,0);
    _objc_msgSend(self,"unlock");
    local_48 = PTR___swiftEmptyArrayStorage_100995ea0;
  }
  else {
    uVar2 = param_1;
    FUN_1001a11bc(param_1,param_2);
    plVar3 = *(long **)(uVar2 + 0x28);
    pcVar4 = *(code **)(*plVar3 + 0xb0);
    _swift_retain(plVar3);
    (*pcVar4)(&local_48);
    _swift_release(plVar3);
    _swift_release(uVar2);
    puVar1 = local_48;
    _swift_bridgeObjectRetain(local_48);
    FUN_100046bcc(&local_48);
    _swift_bridgeObjectRelease(puVar1);
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    local_60 = local_48;
    local_70 = param_1;
    uStack_68 = param_2;
    FUN_1003fb48c(FUN_100049ae0,auStack_80,0xd00000000000009f,0x800000010087cde0,0xd000000000000012,
                  0x800000010087d040,0x18,0);
    _objc_msgSend(self,"unlock");
  }
  return local_48;
}

