// rea decompile_all
// name: FUN_100021348
// address: 0x100021348
// body: available
// range: 0x100021348-0x10002150b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000213c0 to 0x1000c2828 _exit (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1000214ec to 0x1000c2828 _exit (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100021348(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  local_40 = param_1;
  _swift_errorRetain();
  puVar6 = &DAT_100102c28;
  FUN_10000eb08(&DAT_100102c28,&DAT_1000cf6b0);
  ppuVar7 = &local_48;
  _swift_dynamicCast(ppuVar7,&local_40,puVar6,&DAT_1000f78f0,6);
  if (((ulong)ppuVar7 & 1) != 0) {
    iVar1 = (int)local_48;
    if (DAT_100102c5c == '\0') {
      iVar1 = DAT_100102c58;
    }
    iVar2 = 0;
    if ((int)local_48 != 0) {
      iVar2 = iVar1;
    }
                    /* WARNING: Subroutine does not return */
    _exit(iVar2);
  }
  FUN_100021924();
  uVar9 = param_1;
  FUN_100076a6c(param_1,&DAT_1000f30c0,ppuVar7);
  if ((int)uVar9 != 0) {
    local_40 = 0;
    local_38 = 0xe000000000000000;
    __ss11_StringGutsV4growyySiF(0x1e);
    _swift_bridgeObjectRelease(local_38);
    local_40 = 0xd00000000000001c;
    local_38 = 0x80000001000c5880;
    puVar6 = &DAT_100102c30;
    FUN_10000eb08(&DAT_100102c30,&DAT_1000d0700);
    _swift_initStaticObject();
    local_48 = puVar6;
    _swift_bridgeObjectRetain(DAT_1001055e0);
    FUN_1000220fc();
    puVar4 = local_48;
    puVar6 = &DAT_100102c38;
    FUN_10000eb08(&DAT_100102c38,&DAT_1000d1b90);
    puVar8 = puVar6;
    FUN_1000221f4();
    uVar9 = 0x20;
    uVar10 = 0xe100000000000000;
    __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(0x20,0xe100000000000000,puVar6,puVar8);
    _swift_bridgeObjectRelease(puVar4);
    __sSS6appendyySSF(uVar9,uVar10);
    _swift_bridgeObjectRelease(uVar10);
    uVar10 = local_38;
    uVar9 = local_40;
    uVar3 = DAT_100105680;
    _swift_bridgeObjectRetain(local_38);
    FUN_100022760(2,uVar9,uVar10,uVar3);
                    /* WARNING: Subroutine does not return */
    _exit(2);
  }
  FUN_100075c10(param_1,&DAT_1000f30c0,ppuVar7);
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10002150c);
  (*pcVar5)();
}

