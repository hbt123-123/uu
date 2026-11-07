// rea decompile_all
// name: FUN_100546b58
// address: 0x100546b58
// body: available
// range: 0x100546b58-0x100546cb3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100546b58(undefined8 *param_1,undefined1 *param_2,undefined8 *param_3,byte param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  code *pcVar2;
  undefined1 *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar5 = *(ulong *)(param_2 + 0x10);
  if (uVar5 != 0) {
    uVar6 = *(undefined8 *)(param_2 + 0x20);
    uVar1 = *(ulong *)(param_2 + 0x28);
    _swift_bridgeObjectRetain(uVar1);
    uVar4 = uVar1;
    FUN_1005464d8(uVar6,uVar1,param_5);
    _swift_bridgeObjectRelease(uVar1);
    if ((uVar4 & 1) == 0) {
      param_1[4] = uVar6;
      *(undefined1 *)(param_1 + 5) = 0;
      if (uVar5 <= *(ulong *)(param_2 + 0x10)) {
        puVar3 = param_2;
        if (*(ulong *)(param_2 + 0x10) != uVar5 - 1) {
          FUN_100548110(param_2,param_2 + 0x20,1,uVar5 << 1 | 1);
          _swift_bridgeObjectRelease(param_2);
        }
        param_1[6] = puVar3;
        uVar6 = *param_3;
        uVar8 = param_3[3];
        uVar7 = param_3[2];
        param_1[1] = param_3[1];
        *param_1 = uVar6;
        param_1[3] = uVar8;
        param_1[2] = uVar7;
        *(byte *)(param_1 + 7) = param_4 & 1;
        return;
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100546c88);
      (*pcVar2)();
    }
  }
  _swift_bridgeObjectRelease();
  FUN_1005480d0();
  _swift_allocError(&DAT_1009d10f0,param_2,0,0);
  *param_2 = 1;
  _swift_willThrow();
  FUN_100040bb4(param_3,&DAT_100aaa408,&DAT_1008360c8);
  return;
}

