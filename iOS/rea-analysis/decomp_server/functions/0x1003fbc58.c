// rea decompile_all
// name: FUN_1003fbc58
// address: 0x1003fbc58
// body: available
// range: 0x1003fbc58-0x1003fbe73 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001003fbe58) */

undefined * FUN_1003fbc58(long param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  ID self;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long extraout_x8;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  long local_90;
  ulong local_88;
  undefined *local_80;
  ulong local_78;
  undefined *local_68;
  
  lVar3 = 0;
  __s10Foundation3URLVMa();
  lVar8 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar8 + 0x40));
  puVar7 = PTR___swiftEmptyArrayStorage_100995ea0;
  lVar6 = (long)&local_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  if (0 < param_1) {
    if (DAT_100a89358 != -1) {
      _swift_once(&DAT_100a89358,FUN_1003fba60);
    }
    self = DAT_100a8e090;
    _objc_msgSend(DAT_100a8e090,"lock");
    FUN_1003fed60(&local_68);
    puVar5 = local_68;
    _objc_msgSend(self,"unlock");
    FUN_1003fbe74();
    local_78 = param_4 >> 1;
    uVar1 = local_78 - param_3;
    if (SBORROW8(local_78,param_3)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1003fbe54);
      (*pcVar2)();
    }
    if (uVar1 != 0) {
      local_68 = puVar7;
      local_90 = param_1;
      local_80 = puVar5;
      FUN_10006fae0(0,uVar1 & ((long)uVar1 >> 0x3f ^ 0xffffffffffffffffU),0);
      if ((long)uVar1 < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1003fbe58);
        (*pcVar2)();
      }
      local_88 = param_3;
      if ((long)param_3 <= (long)local_78) {
        local_88 = local_78;
      }
      do {
        puVar7 = local_68;
        if (local_88 == param_3) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1003fbe38);
          (*pcVar2)();
        }
        puVar5 = local_80 + *(long *)(lVar8 + 0x48) * param_3;
        lVar4 = lVar6;
        (**(code **)(lVar8 + 0x10))(lVar6,puVar5,lVar3);
        __s10Foundation3URLV4pathSSvg();
        (**(code **)(lVar8 + 8))(lVar6,lVar3);
        uVar1 = *(ulong *)(puVar7 + 0x10);
        local_68 = puVar7;
        if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar1) {
          FUN_10006fae0(1 < *(ulong *)(puVar7 + 0x18),uVar1 + 1,1);
        }
        *(ulong *)(local_68 + 0x10) = uVar1 + 1;
        *(long *)(local_68 + uVar1 * 0x10 + 0x20) = lVar4;
        *(undefined **)(local_68 + uVar1 * 0x10 + 0x28) = puVar5;
        param_3 = param_3 + 1;
        puVar7 = local_68;
      } while (local_78 != param_3);
    }
    _swift_unknownObjectRelease();
  }
  return puVar7;
}

