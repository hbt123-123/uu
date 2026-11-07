// rea decompile_all
// name: FUN_10064030c
// address: 0x10064030c
// body: available
// range: 0x10064030c-0x1006404db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined *
FUN_10064030c(undefined8 param_1,undefined8 param_2,long param_3,ulong param_4,code *param_5)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined1 auStack_110 [40];
  undefined1 auStack_e8 [40];
  undefined1 auStack_c0 [80];
  undefined4 local_70;
  undefined4 local_6c;
  undefined *local_68;
  undefined8 uVar5;
  
  local_68 = PTR___swiftEmptyArrayStorage_100995ea0;
  lVar1 = param_3 + 4;
  if (SCARRY8(param_3,4)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1006404c0);
    (*pcVar3)();
  }
  if (lVar1 < param_3) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1006404c4);
    (*pcVar3)();
  }
  uVar8 = param_4 >> 1;
  if ((long)uVar8 < param_3) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1006404c8);
    (*pcVar3)();
  }
  if ((long)uVar8 < lVar1) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1006404cc);
    (*pcVar3)();
  }
  if (lVar1 < 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1006404d0);
    (*pcVar3)();
  }
  uVar5 = param_1;
  _swift_unknownObjectRetain_n(param_1,2);
  uVar4 = (undefined4)uVar5;
  FUN_10067c25c();
  uVar2 = param_3 + 8;
  local_6c = uVar4;
  if (SCARRY8(param_3,8)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1006404d4);
    (*pcVar3)();
  }
  if ((long)uVar2 < lVar1) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1006404d8);
    (*pcVar3)();
  }
  if (uVar2 <= uVar8) {
    FUN_10067c25c(param_1,param_2,lVar1,param_4 & 1 | uVar2 * 2,lVar1);
    local_70 = (undefined4)param_1;
    (*param_5)(&local_6c,&local_70);
    puVar6 = &DAT_100ab7e50;
    FUN_100004bb4(&DAT_100ab7e50,&DAT_100848d10);
    puVar7 = puVar6;
    _swift_initStackObject();
    uVar4 = local_6c;
    *(undefined8 *)(puVar7 + 0x18) = 4;
    *(undefined8 *)(puVar7 + 0x10) = 2;
    puVar7[0x20] = (char)((uint)local_6c >> 0x18);
    puVar7[0x21] = (char)((uint)local_6c >> 0x10);
    FUN_100628ae0();
    puVar7 = puVar6;
    _swift_initStackObject(puVar6,auStack_c0);
    *(undefined8 *)(puVar7 + 0x18) = 4;
    *(undefined8 *)(puVar7 + 0x10) = 2;
    puVar7[0x20] = (char)((uint)uVar4 >> 8);
    puVar7[0x21] = (char)uVar4;
    FUN_100628ae0();
    puVar7 = puVar6;
    _swift_initStackObject(puVar6,auStack_e8);
    uVar4 = local_70;
    *(undefined8 *)(puVar7 + 0x18) = 4;
    *(undefined8 *)(puVar7 + 0x10) = 2;
    puVar7[0x20] = (char)((uint)local_70 >> 0x18);
    puVar7[0x21] = (char)((uint)local_70 >> 0x10);
    FUN_100628ae0();
    _swift_initStackObject(puVar6,auStack_110);
    *(undefined8 *)(puVar6 + 0x18) = 4;
    *(undefined8 *)(puVar6 + 0x10) = 2;
    puVar6[0x20] = (char)((uint)uVar4 >> 8);
    puVar6[0x21] = (char)uVar4;
    FUN_100628ae0();
    return local_68;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1006404dc);
  (*pcVar3)();
}

